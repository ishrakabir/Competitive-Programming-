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
    string s;
    cin >> s;
    string a, b;
    cin >> a >> b;
    size_t found = s.find(a);
    int p1 = 0, p2 = 0;
    if (found != string::npos)
    {
        found += a.size();
        size_t f2 = s.find(b, found);
        if (f2 != string::npos)
            p1++;
    }
    reverse(all(s));
    size_t found1 = s.find(a);
    if (found1 != string::npos)
    {
        found1 += a.size();
        size_t f2 = s.find(b, found1);
        if (f2 != string::npos)
            p2++;
    }
    if (p1 == 1 & p2 == 0)
    {
        cout << "forward" << el;
    }
    else if (p1 == 0 && p2 == 1)
    {
        cout << "backward" << el;
    }
    else if (p1 == 1 && p2 == 1)
    {
        cout << "both" << el;
    }
    else
    {
        cout << "fantasy" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
