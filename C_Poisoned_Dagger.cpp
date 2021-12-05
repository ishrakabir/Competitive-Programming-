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

bool ok(ll x, vector<ll> v, ll n, ll h)
{
    ll pc = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll d = v[i + 1] - v[i];
        pc += min(d, x);
    }
    pc += x;
    return pc >= h;
}
void solve()
{
    ll t;
    cin >> t;
    w(t)
    {
        vector<ll> v;
        ll n, h;
        cin >> n >> h;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }

        ll l = 0, r = 1;
        while (!ok(r, v, n, h))
            r *= 2;
        cout << r << el;
        ll ans;
        while (l + 1 < r)
        {
            ll m = (l + r) / 2;
            if (ok(m, v, n, h))
            {
                r = m;
                // cout << "R " << r << el;
                // ans = r;
            }
            else
            {

                l = m;
                // cout << "L " << l << el;
                // ans = l;
            }
        }
        cout << r << endl;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
