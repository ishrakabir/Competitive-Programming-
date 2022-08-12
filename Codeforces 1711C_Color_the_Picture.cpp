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
bool possible(ll n, ll m, ll k, vector<ll> v)
{
    ll cnt = 0;
    for (ll i = 0; i < k; i++)
    {
        if (i == 0 && m % 2 == 1)
        {
            if (v[i] / n < 3)
                return false;
            else
            {
                cnt += 3;
                v[i] -= (3ll * n);
            }
        }
        if (cnt >= m)
            return true;
        if (v[i] / n < 2)
            continue;
        cnt += v[i] / n;
    }
    // cout << cnt << " ";
    if (cnt >= m)
        return true;
    else
        return false;
}
void solve()
{
    ll t;
    cin >> t;
    w(t)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(k);
        for (ll i = 0; i < k; i++)
            cin >> v[i];
        if (possible(n, m, k, v) || possible(m, n, k, v))
            cout << "Yes" << el;
        else
            cout << "No" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
