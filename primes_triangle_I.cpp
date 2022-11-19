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
#define ell cout << el << el
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
int prime[100000000], nPrime;
int mark[100000002];
int arr2[100000002];
int arr1[100000002];
// int cols[100000002];
void sieve(int n)
{
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0)
        {
            prime[nPrime++] = i;
            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += (i * 2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
    int cnt = 1;
    int row = 1, col = 1;
    for (int i = 0; i < 5761455; i++)
    {
        int np = (cnt * (cnt + 1)) / 2;
        if (i + 1 > np)
        {
            cnt++;
            col = 1;
            // cout << cnt << " ";
        }
        arr1[prime[i]] = cnt;
        arr2[prime[i]] = col;
        col++;
    }
}
void solve()
{
    sieve(100000000);
    int t;
    cin >> t;
    w(t)
    {
        int n;
        cin >> n;
        if(mark[n]==0)
            cout << arr1[n] << " " << arr2[n] << el;
        else
            cout << -1 << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
