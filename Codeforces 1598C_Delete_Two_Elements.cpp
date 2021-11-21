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
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> mp;
        ll sum = 0;
        loop(i, 0, n)
        {
            cin >> arr[i];
            sum += arr[i];
            mp[arr[i]]++;
        }
        ll req = (2 * sum) / n;
        if ((2 * sum) % n != 0)
        {
            cout << 0 << el;
        }
        else
        {
            ll ans = 0;
            for (int i = 0; i < n; i++)
            {
                ll p = req - arr[i];
                ans += mp[p];
                if (arr[i] == p)
                    ans--;
            }
            cout << ans / 2 << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
