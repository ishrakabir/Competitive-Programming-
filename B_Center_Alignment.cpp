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
    vector<string> v;
    int flag = 0;
    int mx = -INF;
    while (getline(cin, s))
    {
        v.pb(s);
        mx = max(mx, int(s.size()));
    }
    for (int i = 0; i < mx + 2; i++)
        cout << "*";
    cout << el;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "*";
        int p = v[i].size();
        if (p == 0)
        {
            for (int i = 0; i < mx; i++)
                cout << " ";
        }
        else
        {
            int x = mx - p;
            if (x % 2 == 0)
            {
                for (int i = 0; i < (x / 2); i++)
                    cout << " ";
                cout << v[i];
                for (int i = 0; i < (x / 2); i++)
                    cout << " ";
            }
            else
            {
                int x = (mx - p) / 2;
                int l = x;
                int r = x;
                if (flag == 0)
                {
                    r++;
                }
                else
                {
                    l++;
                }
                flag = 1 - flag;
                for (int i = 0; i < l; i++)
                    cout << " ";
                cout << v[i];
                for (int i = 0; i < r; i++)
                    cout << " ";
            }
        }
        cout << "*" << el;
    }
    for (int i = 0; i < mx + 2; i++)
        cout << "*";
}

int main()
{
    fast;
    solve();
    //     test;
}
