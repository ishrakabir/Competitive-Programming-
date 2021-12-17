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
vector<int> vis, indeg;
int flag = 0;
void dfs(vector<vector<int>> &adj, int curr, int par)
{
    vis[curr] = 1;
    for (auto i : adj[curr])
    {
        if (i == par)
            continue;
        if (vis[i])
            flag = 1;
        else
            dfs(adj, i, curr);
    }
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vis.resize(n + 1);
    indeg.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        indeg[b]++;
        indeg[a]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(adj, i, -1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] > 2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    fast;
    solve();
    //     test;
}
