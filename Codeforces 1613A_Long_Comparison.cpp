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
    while (t--)
    {
        string s, t;
        int x, y;
        cin >> s >> x >> t >> y;
        if (s.size() + x < t.size() + y)
            cout << "<" << el;
        else if (s.size() + x > t.size() + y)
            cout << ">" << el;
        else
        {
            int n = stoi(s), m = stoi(t);
            if (x == y)
            {
                if (n == m)
                    cout << "=" << el;
                else if (n < m)
                    cout << "<" << el;
                else if (n > m)
                    cout << ">" << el;
            }
            else
            {
                if (x > y)
                {
                    int p = x - y;
                    while (p--)
                        n *= 10;
                }
                else if (x < y)
                {
                    int p = y - x;
                    while (p--)
                        m *= 10;
                }
                if (n == m)
                    cout << "=" << el;
                else if (n < m)
                    cout << "<" << el;
                else if (n > m)
                    cout << ">" << el;
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
