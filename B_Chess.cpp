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
    char c, d;
    int q, f;
    cin >> c >> q;
    cin >> d >> f;
    int p = c - '0' - 49;
    int e = d - '0' - 49;
    q--;
    f--;

    int arr[8][8];
    memset(arr, 0, sizeof(arr));
    arr[p][q] = 1;
    arr[e][f] = 1;

    for (int i = 0; i < 8; i++)
    {
        arr[p][i] = 1;
    }
    for (int i = 0; i < 8; i++)
    {
        arr[i][q] = 1;
    }
    int X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++)
    {
        int x = e + X[i];
        int y = f + Y[i];

        if (x >= 0 && y >= 0 && x < 8 && y < 8)
            arr[x][y] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // cout << arr[i][j];

            if (arr[i][j] == 0)
            {
                cnt++;
                for (int k = 0; k < 8; k++)
                {
                    int x = i + X[k];
                    int y = j + Y[k];
                    if (x >= 0 && y >= 0 && x < 8 && y < 8)
                    {
                        if ((x == p && y == q) || (x == e && y == f))
                            cnt--;
                    }
                }
            }
        }
        cout << el;
    }

    cout << cnt;
}

int main()
{
    fast;
    solve();
    //     test;
}
