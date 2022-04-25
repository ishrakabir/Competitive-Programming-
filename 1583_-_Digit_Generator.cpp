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

void solve()
{
    int t;
    cin >> t;
    int ans[100005];
    memset(ans, 0, sizeof(ans));
    for (int n = 1; n <= 1e5 + 7; n++)
    {
        int remainder;
        int sum = n;
        int x = n;
        while (x > 0)
        {
            remainder = x % 10;
            sum = sum + remainder;
            x = x / 10;
        }
        if (ans[sum] == 0)
            ans[sum] = n;
    }
    w(t)
    {
        int n;
        cin >> n;
        cout << ans[n] << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
