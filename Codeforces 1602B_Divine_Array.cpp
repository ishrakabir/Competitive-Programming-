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
    w(t)
    {
        int n;
        cin >> n;
        vector<ll> v;

        loop(i, 0, n)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<vector<ll>> a;
        for (int i = 0; i < 2000; i++)
        {
            unordered_map<ll, ll> mp;
            a.push_back(v);
            for (ll i = 0; i < v.size(); i++)
            {
                mp[v[i]]++;
            }
            for (ll i = 0; i < n; i++)
            {
                v[i] = mp[v[i]];
            }
            auto it = mp.begin();
            mp.erase(it, mp.end());
        }

        ll q;
        cin >> q;
        w(q)
        {
            ll x, k;
            cin >> x >> k;
            if (k > 2000)
                cout << a[1999][x - 1] << el;
            else
                cout << a[k][x - 1] << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
