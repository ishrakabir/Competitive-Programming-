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

    ll n, k;
    cin >> n >> k;
    ll sum[n];
    ll vis[n];
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            sum[i] += x;
        }
        vis[i] = sum[i];
    }
    sort(vis, vis + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (k == 1)
        {
            if (sum[i] + 300 >= vis[0])
                cout << "Yes" << el;
            else
                cout << "No" << el;
        }
        else if (k == n)
        {
            if (sum[i] > vis[n - 1])
                cout << "No" << el;
            else
                cout << "Yes" << el;
        }
        else
        {
            if (sum[i] + 300 >= vis[k - 1])
                cout << "Yes" << el;
            else
                cout << "No" << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
