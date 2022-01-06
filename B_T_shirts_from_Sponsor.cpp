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

    int ns, nm, nl, nxl, nxxl;
    cin >> ns >> nm >> nl >> nxl >> nxxl;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        if (s == "S")
        {
            if (ns > 0)
            {
                cout << "S" << el;
                ns--;
            }
            else
            {
                if (nm > 0)
                {
                    cout << "M" << el;
                    nm--;
                }
                else if (nm == 0 && nl > 0)
                {
                    cout << "L" << el;
                    nl--;
                }
                else if (nm == 0 && nl == 0 && nxl > 0)
                {
                    cout << "XL" << el;
                    nxl--;
                }
                else if (nm == 0 && nl == 0 && nxl == 0 && nxxl > 0)
                {
                    cout << "XXL" << el;
                    nxxl--;
                }
            }
        }
        else if (s == "M")
        {
            if (nm > 0)
            {
                cout << "M" << el;
                nm--;
            }
            else
            {
                if (nl > 0)
                {
                    cout << "L" << el;
                    nl--;
                }
                else if (nl == 0 && ns > 0)
                {
                    cout << "S" << el;
                    ns--;
                }
                else if (nl == 0 && ns == 0 && nxl > 0)
                {
                    cout << "XL" << el;
                    nxl--;
                }
                else if (ns == 0 && nl == 0 && nxl == 0 && nxxl > 0)
                {
                    cout << "XXL" << el;
                    nxxl--;
                }
            }
        }
        else if (s == "L")
        {
            if (nl > 0)
            {
                cout << "L" << el;
                nl--;
            }
            else
            {
                if (nxl > 0)
                {
                    cout << "XL" << el;
                    nxl--;
                }
                else if (nxl == 0 && nm > 0)
                {
                    cout << "M" << el;
                    nm--;
                }

                else if (nm == 0 && nxl == 0 && nxxl > 0)
                {
                    cout << "XXL" << el;
                    nxxl--;
                }
                else if (nm == 0 && nxl == 0 && nxxl == 0 && ns > 0)
                {
                    cout << "S" << el;
                    ns--;
                }
            }
        }
        else if (s == "XL")
        {
            if (nxl > 0)
            {
                cout << "XL" << el;
                nxl--;
            }
            else
            {
                if (nxxl > 0)
                {
                    cout << "XXL" << el;
                    nxxl--;
                }
                else if (nxxl == 0 && nl > 0)
                {
                    cout << "L" << el;
                    nl--;
                }
                else if (nxxl == 0 && nl == 0 && nm > 0)
                {
                    cout << "M" << el;
                    nm--;
                }
                else if (nm == 0 && nl == 0 && nxxl == 0 && ns > 0)
                {
                    cout << "S" << el;
                    ns--;
                }
            }
        }
        else if (s == "XXL")
        {
            if (nxxl > 0)
            {
                cout << "XXL" << el;
                nxxl--;
            }
            else
            {
                if (nxl > 0)
                {
                    cout << "XL" << el;
                    nxl--;
                }
                else if (nxl == 0 && nl > 0)
                {
                    cout << "L" << el;
                    nl--;
                }
                else if (nxl == 0 && nl == 0 && nm > 0)
                {
                    cout << "M" << el;
                    nm--;
                }
                else if (nm == 0 && nl == 0 && nxl == 0 && ns > 0)
                {
                    cout << "S" << el;
                    ns--;
                }
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
