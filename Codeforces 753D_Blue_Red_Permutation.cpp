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

void solve()
{
    ll t;
    cin >> t;
    w(t)
    {
        ll n;
        ci >> n;
        ll arr[n];
        loop(i, 0, n)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        vector<ll> b;
        vector<ll> r;
        loop(i, 0, n)
        {
            if (s[i] == 'B')
                b.pb(arr[i]);
            else
                r.pb(arr[i]);
        }
        st(b);
        st(r);
        int curr = 1;
        bool flag = 0;
        vector<ll> v;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] >= curr)
            {
                curr++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        for (int i = 0; i < r.size(); i++)
        {
            if (r[i] <= curr)
            {
                curr++;
            }
            else
            {
                flag = 1;
                break;
                        }
        }

        if (flag == 1)
            cout << "NO" << el;
        else
            cout << "YES" << el;
    }
}

int main()
{

    fast;
    solve();

    return 0;
}
