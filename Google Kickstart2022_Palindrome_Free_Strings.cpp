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
bool palindrome(string a)
{
    ll i, l, f = 0;

    l = a.size();

    if (l <= 4)
    {
        return true;
    }
    else
    {
        l = a.size();

        for (i = 0; i < l / 2; i++)
        {
            if (a[i] != a[l - i - 1])
            {
                f++;
                break;
            }
        }
    }
    // cout<<a<<" "<<f<<"\n";
    if (f == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    int t;
    cin >> t;
    for (int cnt = 1; cnt <= t; cnt++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.size() <= 4)
        {
            cout << "Case #" << cnt << ": POSSIBLE" << el;
        }
        else
        {
            queue<string> q1, q2;
            if (s[0] == '?')
            {
                q1.push("1");
                q1.push("0");
            }
            else
            {
                if (s[0] == '0')
                {
                    q1.push("0");
                }
                else
                {
                    q1.push("1");
                }
            }
            string b, c;
            int l;
            int flag = 0;
            for (int i = 1; i < n; i++)
            {
                while (q1.empty() == false)
                {
                    b = q1.front();
                    q1.pop();
                    l = b.size() + 1;
                    if (s[i] == '?')
                    {
                        c = b + "0";
                        if (l <= 4)
                        {
                            q2.push(c);
                        }
                        else if (l == 5)
                        {
                            if (palindrome(c) == false)
                            {
                                q2.push(c);
                            }
                        }
                        else
                        {
                            if (palindrome(c) == false && palindrome(c.substr(1, l - 1)) == false)
                            {
                                q2.push(c.substr(1, l - 1));
                            }
                        }

                        c = b + "1";
                        if (l <= 4)
                        {
                            q2.push(c);
                        }
                        else if (l == 5)
                        {
                            if (palindrome(c) == false)
                            {
                                q2.push(c);
                            }
                        }
                        else
                        {
                            if (palindrome(c) == false && palindrome(c.substr(1, l - 1)) == false)
                            {
                                q2.push(c.substr(1, l - 1));
                            }
                        }
                    }
                    else
                    {
                        c = b + s[i];
                        if (l <= 4)
                        {
                            q2.push(c);
                        }
                        else if (l == 5)
                        {
                            if (palindrome(c) == false)
                            {
                                q2.push(c);
                            }
                        }
                        else
                        {
                            if (palindrome(c) == false && palindrome(c.substr(1, l - 1)) == false)
                            {
                                q2.push(c.substr(1, l - 1));
                            }
                        }
                    }
                }
                while (q2.empty() == false)
                {
                    q1.push(q2.front());
                    q2.pop();
                }
                if (q1.empty() == true)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "Case #" << cnt << ": POSSIBLE" << el;
            }
            else
            {
                cout << "Case #" << cnt << ": IMPOSSIBLE" << el;
            }
        }
    }
}

int main()
{
    fast;
    solve();
    // test;
}
