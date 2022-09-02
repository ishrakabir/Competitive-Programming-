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

    ll t;
    cin >> t;
    w(t)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        ll maxy;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == n)
                maxy = i;
        }
        ll left = 0, right = 1;
        map<ll, pair<ll, ll>> mp;
        ll count = 1;
        while (1)
        {
            if (right >= n)
                break;
            if (arr[right] > arr[left])
            {
                left = right;
                mp[right].first++;
                mp[right].second = count;
            }
            else
            {
                mp[left].first++;
                mp[left].second = count;
            }
            count++;
            right++;
        }
        w(q)
        {
            ll ind, move;
            cin >> ind >> move;
            ind--;
            if (move >= mp[ind].second)
            {
                ll extra = 0;
                if (ind == maxy)
                    extra = move - mp[ind].second ;
                else
                    extra = 0;
                cout << mp[ind].first + extra << el;
            }
            else
            {
                ll ashtelagbe = mp[ind].second - move;
                cout<<max(0ll,mp[ind].first-ashtelagbe)<<el;
            }
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
