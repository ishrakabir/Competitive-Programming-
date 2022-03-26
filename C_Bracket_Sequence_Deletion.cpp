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
        string str;
        cin >> str;
        int flag = 0, g = 0;
        int cnt = 0;
        int p = 0;
        int size = 0;
        int final = 0;
        int target = 0;
        if (n == 1)
        {
            cout << 0 << " " << 1 << el;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (g == 1)
                {
                    cnt++;
                    g = 0;
                    final = i;
                    target++;
                    // cout << i << el;
                    continue;
                }
                if (str[i] == '(')
                {
                    if (flag == 0)
                    {
                        g = 1;
                    }
                }
                else
                {
                    if (str[i] == ')')
                    {
                        p++;
                        flag = 1;
                    }
                    if (p == 2)
                    {
                        p = 0;
                        final = i;
                        // cout << i << el;
                        cnt++;
                        flag = 0;
                        target++;
                    }
                }
            }
            if (target == 0)
            {
                cout << 0 << " " << n << el;
            }
            else
                cout << cnt << " " << n - (final + 1) << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
