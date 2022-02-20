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

map<string, string> parent;
map<string, int> Size;

string Find_parent(string v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find_parent(parent[v]);
}

int Union(string a, string b)
{
    a = Find_parent(a);
    b = Find_parent(b);
    if (a == b)
        return max(Size[a], Size[b]);
    if (Size[a] < Size[b])
        swap(a, b);
    parent[b] = a;
    Size[a] += Size[b];
    Size[b] = 0;

    return Size[a];
}
void solve()
{
    ll t;
    cin >> t;
    w(t)
    {
        ll k;
        cin >> k;
        while (k--)
        {
            string u, v;
            cin >> u >> v;
            if (parent.find(u) == parent.end())
            {
                parent[u] = u;
                Size[u] = 1;
            }
            if (parent.find(v) == parent.end())
            {
                parent[v] = v;
                Size[v] = 1;
            }
            cout << Union(u, v) << el;
        }
        parent.clear();
        Size.clear();
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
