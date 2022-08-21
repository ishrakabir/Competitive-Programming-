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
        ll n;
        cin >> n;
        ll arr[n];
        ll brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = i + 1;
        }
        ll flag = 0;
        ll vis[n];
        memset(vis, 0, sizeof vis);
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                v.push_back(brr[i + 1]);
                swap(brr[i], brr[i + 1]);
                vis[i] = 1, vis[i + 1] = 1;
            }
            else
            {
                if (vis[i] == 1)
                {
                    v.push_back(brr[i]);
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (vis[n - 1] == 1)
        {
            v.push_back(brr[n - 1]);
        }
        else
        {
            flag = 1;
        }
        if (flag == 1)
        {
            cout << -1 << el;
        }
        else
        {

            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
