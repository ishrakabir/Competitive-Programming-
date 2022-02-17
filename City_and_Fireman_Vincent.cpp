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
void make(int v)
{
    parent[v] = v;
}
ll Find_parent(ll v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find_parent(parent[v]);
}

void Union(int a, int b)
{
    a = Find_parent(a);
    b = Find_parent(b);
    if (a != b)
    {
        if (Size[a] > Size[b])
            swap(a, b);
        parent[b] = a;
    }
}
void solve()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        make(i);
    for (int i = 1; i <= n; i++)
    {
        cin >> Size[i];
    }
    int t;
    cin >> t;
    vector<int> vt;
    for (int i = 0; i < t; i++)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    long long ans = 1;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << " " << Find_parent(i) << " " << Size[Find_parent(i)] << " " << Size[i] << el;
        // cout << i << " = " << Find_parent(i) << el;
        if (Size[Find_parent(i)] == Size[i])
            mp[Find_parent(i)]++;
    }
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << el;
    // }
    for (auto it : mp)
        ans = (ans * it.second) % 1000000007;
    cout << ans << endl;
}

int main()
{
    fast;
    solve();
    //     test;
}
