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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        bool all = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
            {
                all = 1;
                break;
            }
        }
        if (all == 0)
        {
            cout << 0 << el;
        }
        else
        {
            bool flag = 0;
            for (int i = 2; i <= n; i++)
            {
                int count = 0;

                for (int j = i; j <= n; j += i)
                {
                    if (s[j - 1] != c)
                    {
                        count = 1;
                        break;
                    }
                }
                if (count == 0)
                {
                    cout << 1 << el << i << el;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << 2 << el << n << " " << n - 1 << el;
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
