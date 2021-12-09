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
int n, k;
string s;
bool ok(int m)
{

    ll a = 0, b = 0, c1 = INT_MAX, c2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a++;
        else
            b++;
        if (i >= m)
        {
            if (s[i - m] == 'a')
                a--;
            else
                b--;
        }
        if (i >= m - 1)
        {
            c1 = min(c1, a);
            c2 = min(c2, b);
        }
    }
    return min(c1, c2) <= k;
}

void solve()
{
    cin >> n >> k >> s;
    int l = 0, r = 2e6;
    int ans = 0;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (ok(l))
    {
        cout << l << endl;
        return;
    }

    cout << ans << endl;
}

int main()
{
    fast;
    solve();
    //     test;
}
