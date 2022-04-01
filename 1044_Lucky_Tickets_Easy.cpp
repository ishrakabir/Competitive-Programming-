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

    int n;
    cin >> n;
    ll p;
    int last;
    if (n == 2)
        last = 9;
    else if (n == 3)
        last = 9;
    else if (n == 4)
        last = 99;
    else if (n == 5)
        last = 99;
    else if (n == 6)
        last = 999;
    else if (n == 7)
        last = 999;
    else if (n == 8)
        last = 9999;
    int ans = 0;
    int mem[38];
    memset(mem, 0, sizeof(mem));
    for (int i = 0; i <= last; i++)
    {
        int p = i;
        int sum = 0;
        while (p > 0)
        {
            sum += p % 10;
            p /= 10;
        }
        mem[sum]++;
    }
    for (int i = 0; i < 38; i++)
    {
        ans += (mem[i] * mem[i]);
    }

    cout << ans << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
