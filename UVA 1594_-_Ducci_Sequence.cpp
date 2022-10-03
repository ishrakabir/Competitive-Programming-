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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            ans.push_back(0);
        }
        ll flag = 0;
        for (ll i = 0; i <= 200; i++)
        {
            ll p = v[0];
            for (ll j = 0; j < n; j++)
            {
                if (j == n - 1)
                {
                    v[n - 1] = abs(p - v[n - 1]);
                }
                else
                {
                    v[j] = abs(v[j] - v[j + 1]); 
                }
            }
            if(ans==v)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            cout << "ZERO" << el;
        else
            cout << "LOOP" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
