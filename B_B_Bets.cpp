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
    vector<int> tm(n + 1, INT_MAX);
    vector<int> rm(n + 1, INT_MAX);
    for (int i = 0; i < m; i++)
    {
        int l, r, t, c;
        cin >> l >> r >> t >> c;
        for (int j = l; j <= r; j++)
        {
            if (t < tm[j])
            {
                tm[j] = t;
                rm[j] = c;
            }
        }
    }
    ll sum = 0;
    for (int i = 0; i < tm.size(); i++)
    {
        if (tm[i] != INT_MAX)
        {
            sum += rm[i];
        }
    }
    cout << sum << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
