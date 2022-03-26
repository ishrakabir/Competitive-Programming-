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
    while (getline(cin, s))
    {
        string a = "", b = "", c = "", d = "", e = "", f = "";
        a += s[0];
        a += s[5];
        b += s[1];
        b += s[4];
        c += s[2];
        c += s[3];
        d += s[6];
        d += s[11];
        e += s[7];
        e += s[10];
        f += s[8];
        f += s[9];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(e.begin(), e.end());
        sort(f.begin(), f.end());
        // cout << a << el << b << el << c << el << d << el << e << el << f << el;
        vector<string> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        vector<string> p;
        p.push_back(d);
        p.push_back(e);
        p.push_back(f);
        sort(p.begin(), p.end());
        int flag = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (v[i] != p[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "TRUE" << el;
        else
            cout << "FALSE" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
