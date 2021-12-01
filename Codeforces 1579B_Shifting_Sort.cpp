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
    vector<int> a(n);
    loop(i, 0, n)
    {
        cin >> a[i];
    }
    vector<vector<int>> ok;
    for (int i = 0; i < n; i++)
    {
        int itr = max_element(a.begin(), a.end()) - a.begin();
        if (itr != n - i - 1)
        {
            ok.push_back({itr + 1, n - i, 1});
        }
        a.erase(a.begin() + itr);
    }
    cout << ok.size() << " " << el;
    for (int i = 0; i < ok.size(); i++)
        cout << ok[i][0] << " " << ok[i][1] << " " << ok[i][2] << el;

    return;
}

int main()
{
    fast;
    //  solve();
    test;
}
