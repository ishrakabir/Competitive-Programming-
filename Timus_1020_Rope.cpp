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

    double n, a;
    cin >> n >> a;
    vector<double> v1(n);
    vector<double> v2(n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        double ans1 = (v1[i] - v1[i + 1]) * (v1[i] - v1[i + 1]);
        double ans2 = (v2[i] - v2[i + 1]) * (v2[i] - v2[i + 1]);
        sum += sqrt(ans1 + ans2);
    }
    // cout << sum << el;
    double ans3 = (v1[n - 1] - v1[0]) * (v1[n - 1] - v1[0]);
    double ans4 = (v2[n - 1] - v2[0]) * (v2[n - 1] - v2[0]);

    sum += sqrt(ans3 + ans4);
    // cout << sum << el;
    sum += (2 * 3.1415926 * a);
    cout << fixed << setprecision(2) << sum << el;
    // n = n % 4;
    // // cout << n << el;
    // if (n == 0)

    //     else if (n == 1)
    //     {
    //         sum += ((3.14159) / 2);
    //         cout << fixed << setprecision(2) << sum << el;
    //     }
    // else if (n == 2)
    // {
    //     sum += (3.14159);
    //     cout << fixed << setprecision(2) << sum << el;
    // }
    // else if (n == 3)
    // {
    //     sum += ((3 * 3.14159) / 2);
    //     cout << fixed << setprecision(2) << sum << el;
    // }
}

int main()
{
    fast;
    solve();
    //     test;
}
