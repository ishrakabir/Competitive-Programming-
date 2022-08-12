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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double ans = 0;
    if (b <= f && d <= b)
    {
        int p = abs(c - a);
        int q = abs(e - a);
        ans = min(p, q);
    }
    else if (a <= e && c <= a)
    {
        int l = abs(d - b);
        int m = abs(f - b);
        ans = min(l, m);
    }
    else
    {
        double op1, op2;
        double g = sqrt((a - c) * (a - c) + (b - f) * (b - f));
        double h = sqrt((a - e) * (a - e) + (b - d) * (b - d));
        double i = sqrt((a - c) * (a - c) + (b - d) * (b - d));
        double j = sqrt((a - e) * (a - e) + (b - f) * (b - f));
        op1 = min(g, h);
        op2 = min(i, j);

        ans = min(op1, op2);
    }
    cout << fixed << setprecision(3) << ans << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
