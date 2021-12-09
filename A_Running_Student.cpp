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

    int n;
    double vb, vs;
    cin >> n >> vb >> vs;
    int arr[n];
    loop(i, 0, n)
    {
        cin >> arr[i];
    }
    double x, y;
    cin >> x >> y;
    double min = INT_MAX, t;
    int ans;
    for (int i = 1; i < n; i++)
    {
        double p = (arr[i] - x) * (arr[i] - x);
        double q = y * y;
        double r = (sqrt(p + q)) / vs;
        double l = (arr[i]) / vb;
        double t = r + l;
        // cout << r << " " << l << " " << t << el;

        if (t <= min)
        {
            min = t;
            ans = i;
        }
    }
    cout << ans + 1 << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
