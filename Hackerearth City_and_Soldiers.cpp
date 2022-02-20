#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<int, int>;
using pii = pair<ll, ll>;
using vi = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

#define ci cin
#define co cout

#define PI 3.141592653589793238
#define w(n) while (n--)
#define fir first
#define sec second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define loop(i, n, x) for (int i = n; i < x; i++)
#define sz(a) ((int)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (int i = 1; i <= x; i++)
#define ite iterator it
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test     \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
#define in insert
#define el endl

int parent[100005];
int Size[100005];
multiset<int> sizes;
void make(int v)
{
    parent[v] = v;
    // Size[v] = 1;
    // sizes.insert(1);
}
ll Find_parent(ll v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find_parent(parent[v]);
}
// void merge(int a, int b)
// {
//     sizes.erase(sizes.find(Size[a]));
//     sizes.erase(sizes.find(Size[b]));
//     sizes.insert(Size[a] + Size[b]);
// }
void Union(int a, int b)
{
    a = Find_parent(a);
    b = Find_parent(b);
    if (a != b)
    {
        parent[a] = b;
        // merge(a, b);
        // Size[a] += Size[b];
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        make(i);
    while (k--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int a, b;
            cin >> a >> b;
            Union(a, b);
        }
        else if (n == 2)
        {
            ll a;
            cin >> a;
            int x = Find_parent(a);
            parent[x] = a;
            parent[a] = a;
        }
        else
        {
            ll a;
            cin >> a;
            int x = Find_parent(a);
            cout << x << el;
        }
    }
}

int main()
{
    solve();
    //     test;
}
