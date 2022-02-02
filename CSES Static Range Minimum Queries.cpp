#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<ll, ll>;
using pii = pair<ll, ll>;
using vi = vector<ll>;
using vii = vector<ll>;
using vip = vector<pair<ll, ll>>;

const ll MAX_N = 2e5 + 1;
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
#define loop(i, n, x) for (ll i = n; i < x; i++)
#define sz(a) ((ll)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (ll i = 1; i <= x; i++)
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
ll n;
ll sparse_table[20][200005];
void buildSparseTable(ll arr[], ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        sparse_table[0][i] = arr[i];
    }
    for (ll k = 1; k <= log2(n); k++)
    {
        for (ll i = 1; i <= n - ((1 << k) - 1); i++)
        {
            sparse_table[k][i] = min(sparse_table[k - 1][i], sparse_table[k - 1][i + (1 << (k - 1))]);
        }
    }
}
ll min_query(ll l, ll r)
{
    ll len = r - l + 1;
    ll k = log2(len);
    return min(sparse_table[k][l], sparse_table[k][r - (1 << k) + 1]);
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    buildSparseTable(arr, n);
    // cout << sparse_table[3][1] << el;
    w(q)
    {
        ll l, r;
        cin >> l >> r;
        cout << min_query(l, r) << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
