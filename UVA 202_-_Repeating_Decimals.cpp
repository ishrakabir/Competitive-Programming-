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
    int a, b;
    while (~scanf("%d%d", &a, &b))
    {
        cout << a << "/" << b << " = " << a / b << ".";
        int vis[30000], ans[30000];
        memset(vis, 0, sizeof(vis));
        memset(ans, 0, sizeof(ans));
        a = a % b;
        a *= 10;
        int cnt = 1;
        while (vis[a] == 0)
        {
            vis[a] = cnt;
            ans[cnt] = a / b;
            a %= b;
            a *= 10;
            cnt++;
        }
        int i = 1;
        int bg = vis[a];
        while (i < bg)
        {
            cout << ans[i];
            i++;
        }
        int ed = cnt;
        cout << "(";
        while (i < ed)
        {
            cout << ans[i];
            if (i == bg + 49)
            {
                cout << "...";
                break;
            }
            i++;
        }
        cout << ")" << el;
        cout << "   " << ed - bg << " = "
             << "number of digits in repeating cycle" << el;
        cout << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
