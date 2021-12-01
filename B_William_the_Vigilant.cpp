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

    int n, q, cnt = 0;
    string s;
    cin >> n >> q >> s;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'a')
        {
            if (i + 1 < n && s[i + 1] == 'b' && i + 2 < n && s[i + 2] == 'c')
            {
                cnt++;
                i += 2;
            }
        }
    }
    while (q--)
    {
        int pos;
        char ch;
        cin >> pos >> ch;
        pos -= 1;
        string x, y;
        if (n >= 3)
        {
            if (pos == 0)
            {
                if (pos + 2 < n)
                {
                    x += s[pos], x += s[pos + 1], x += s[pos + 2];
                    y += ch, y += s[pos + 1], y += s[pos + 2];
                    if (x == "abc" && y != "abc")
                        cnt--;
                    else if (x != "abc" && y == "abc")
                        cnt++;
                }
            }
            else if (pos == 1)
            {
                bool f = 0;
                if (pos + 2 < n)
                {
                    x += s[pos], x += s[pos + 1], x += s[pos + 2];
                    y += ch, y += s[pos + 1], y += s[pos + 2];
                    if (x == "abc" && y != "abc")
                    {
                        cnt--;
                        f = 1;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
                x.clear(), y.clear();

                if (pos - 1 >= 0 && pos + 1 < n)
                {
                    x += s[pos - 1], x += s[pos], x += s[pos + 1];
                    y += s[pos - 1], y += ch, y += s[pos + 1];
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
            }
            else if (pos == n - 2)
            {
                bool f = 0;
                if (pos - 2 >= 0)
                {
                    x += s[pos - 2], x += s[pos - 1], x += s[pos];
                    y += s[pos - 2], y += s[pos - 1], y += ch;
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
                x.clear(), y.clear();

                if (pos - 1 >= 0 && pos + 1 < n)
                {
                    x += s[pos - 1], x += s[pos], x += s[pos + 1];
                    y += s[pos - 1], y += ch, y += s[pos + 1];
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
                x.clear(), y.clear();
            }
            else if (pos == n - 1)
            {
                bool f = 0;
                if (pos - 2 >= 0)
                {
                    x += s[pos - 2], x += s[pos - 1], x += s[pos];
                    y += s[pos - 2], y += s[pos - 1], y += ch;
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
            }
            else if (pos > 1 && pos < n - 2)
            {
                bool f = 0;
                if (pos + 2 < n)
                {
                    x += s[pos], x += s[pos + 1], x += s[pos + 2];
                    y += ch, y += s[pos + 1], y += s[pos + 2];
                    if (x == "abc" && y != "abc")
                    {
                        cnt--;
                        f = 1;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
                x.clear(), y.clear();

                if (pos - 2 >= 0)
                {
                    x += s[pos - 2], x += s[pos - 1], x += s[pos];
                    y += s[pos - 2], y += s[pos - 1], y += ch;
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
                x.clear(), y.clear();
                if (pos - 1 >= 0 && pos + 1 < n)
                {
                    x += s[pos - 1], x += s[pos], x += s[pos + 1];
                    y += s[pos - 1], y += ch, y += s[pos + 1];
                    if (x == "abc" && y != "abc")
                    {
                        f = 1;
                        cnt--;
                    }
                    else if (x != "abc" && y == "abc")
                    {
                        f = 1;
                        cnt++;
                    }
                }
            }
        }
        s[pos] = ch;
        cout << cnt << endl;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
