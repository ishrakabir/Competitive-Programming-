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

    int d, sum;
    cin >> d >> sum;
    vector<pair<int, int>> v;
    vector<int> v2(d);
    int s1 = 0, s2 = 0;
    for (int i = 0; i < d; i++)
    {
        int x, y;
        cin >> x >> y;
        s1 += x;
        s2 += y;
        v.pb(make_pair(x, y));
    }

    int rem = sum - s1;
    if (s1 > sum || s2 < sum)
    {
        cout << "NO" << el;
    }
    else
    {
        cout << "YES" << el;

        for (int i = 0; i < v.size(); i++)
        {
            v2[i] = v[i].first;
        }
        for (int i = 0; i < v.size(); i++)
        {
            int mn = min(v[i].second - v[i].first, rem);
            rem -= mn;
            v2[i] += mn;
            cout << v2[i] << " ";
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
