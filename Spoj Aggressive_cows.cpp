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
#define in insert
#define el endl

ll n, c;
bool ok(ll arr[], ll m)
{
    ll p = arr[0];
    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - p) >= m)
        {
            cnt++;
            p = arr[i];
        }
        if (cnt == c)
            return true;
    }
    return false;
}
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll l = 0, r = arr[n - 1] - arr[0];
        while (l + 1 < r)
        {
            ll m = (l + r) / 2;
            if (ok(arr, m))
            {
                l = m;
            }
            else
                r = m;
        }
        cout << l << el;
    }
}

int main()
{

    fast;
    solve();

#ifndef ONLINE_JUDGE
    cerr << el << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
