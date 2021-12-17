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

    int n, m;
    cin >> n >> m;
    char c;
    cin >> c;
    int cnt = 0;
    char s[110][110];
    for (int i = 0; i <= 101; i++)
    {
        for (int j = 0; j <= 101; j++)
        {
            s[i][j] = '.';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
        }
    }
    set<char> st;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i][j] == c)
            {
                st.insert(s[i][j - 1]);
                st.insert(s[i][j + 1]);
                st.insert(s[i - 1][j]);
                st.insert(s[i + 1][j]);
            }
        }
    }
    for (auto it : st)
    {
        if (it == '.' || it == c)
            continue;
        else
            cnt++;
    }
    cout << cnt << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
