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

    int a, b, n, m, i, j, k, cnt;
    cin >> n >> m;
    int arr[51][51];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = INF;
    cin >> a >> b;
    if (a <= n && b <= m)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (i + a - 1 <= n && j + b - 1 <= m)
                {
                    cnt = 0;
                    for (int q = 0; q < a; q++)
                    {
                        for (int p = 0; p < b; p++)
                        {
                            if (arr[i + q][j + p] == 1)
                                cnt++;
                        }
                    }

                    ans = min(ans, cnt);
                }
            }
        }
    }
    swap(a, b);
    if (a <= n && b <= m)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (i + a - 1 <= n && j + b - 1 <= m)
                {
                    cnt = 0;
                    for (int q = 0; q < a; q++)
                    {
                        for (int p = 0; p < b; p++)
                        {
                            if (arr[i + q][j + p] == 1)
                                cnt++;
                        }
                    }

                    ans = min(ans, cnt);
                }
            }
        }
    }
    cout << ans;
}

int main()
{
    fast;
    solve();
    //     test;
}
