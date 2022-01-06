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

const int MAX_N = 2e5 + 7;
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

void solve()
{
    vector<vector<int>> dp(2e5 + 7, vector<int>(22));
    for (int i = 0; i < MAX_N; i++)
    {
        bitset<22> b(i);
        // cout << b << el;
        for (int j = 0; j < 22; j++)
        {
            if (b[j] == 1)
                dp[i][j] = 1;
        }
    }
    for (int i = 0; i < 22; i++)
    {
        for (int j = 1; j < MAX_N; j++)
        {
            dp[j][i] += dp[j - 1][i];
        }
    }
    // for (int i = 0; i < MAX_N; i++)
    // {
    //     for (int j = 0; j < 22; j++)
    //     {
    //         cout << dp[i][j];
    //     }
    //     cout << el;
    // }
    int t;
    cin >> t;
    w(t)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;
        for (int i = 0; i < 22; i++)
        {
            ans = max(ans, dp[r][i] - dp[l - 1][i]);
        }
        cout << (r - l + 1) - ans << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
