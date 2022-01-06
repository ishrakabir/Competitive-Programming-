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
        string s1, s2;
        cin >> s1 >> s2;
        string ans = "";
        bool fl = 0;
        while (s1.size() && s2.size())
        {
            int p = s1.back() - '0';
            int q = s2.back() - '0';
            s1.pop_back();
            s2.pop_back();
            if (p > q && s2.size() == 0)
            {
                fl = 1;
                break;
            }
            if (p > q)
            {
                if (s2.back() != '1')
                {
                    fl = 1;
                    break;
                }
                else
                {
                    q = (10 * (s2.back() - '0')) + q;
                    s2.pop_back();
                }
            }
            ans += to_string(q - p);
            // cout << ans;
        }
        if (s1.size())
            fl = 1;
        if (fl == 1)
            cout << -1 << el;
        else
        {
            if (s2.size() >= 0)
            {
                reverse(ans.begin(), ans.end());
                ans = s2 + ans;
            }

            bool flag = 0;
            for (int i = 0; i < ans.size(); i++)
            {
                if (flag == 0 && ans[i] == '0')
                    continue;
                else
                {
                    flag = 1;
                    cout << ans[i];
                }
            }
            // reverse(ans.begin(), ans.end());
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
