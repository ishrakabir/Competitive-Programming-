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
ll sparse_table[25][100000 + 10];
ll Log[100000 + 10];

void precalLog(ll n)
{
    for (ll i = 2; i <= n; i++)
    {
        Log[i] = Log[i / 2] + 1;
    }
}
void buildSparseTable(ll arr[], ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        sparse_table[0][i] = arr[i - 1];
    }
    for (ll k = 1; k <= 25; k++)
    {
        for (ll i = 1; i <= n - ((1 << k) - 1); i++)
        {
            sparse_table[k][i] = max(sparse_table[k - 1][i], sparse_table[k - 1][i + (1 << (k - 1))]);
        }
    }
}

ll min_query(ll l, ll r)
{
    ll len = (r - l) + 1;
    // ll k = 31 - __builtin_clz(len);
    ll k = Log[len];
    return max(sparse_table[k][l], sparse_table[k][r - (1 << k) + 1]);
}

void solve()
{
    int n;
    cin >> n;

    ll arr[100005];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    precalLog(100000);
    buildSparseTable(arr, n);

    int m, x, y;
    cin >> m >> x >> y;

    ll ans = min_query(min(x + 1, y + 1), max(x + 1, y + 1));

    m--;

    w(m)
    {
        x = ((x + 7) % (n - 1));
        y = ((y + 11) % n);

        ans += min_query(min(x + 1, y + 1), max(x + 1, y + 1));
    }

    cout << ans;
}

int main()
{
    fast;
    solve();
    //     test;
}
