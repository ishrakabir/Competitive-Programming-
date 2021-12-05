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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int freq[6];
        int mx = 0;
        memset(freq, 0, sizeof(freq));
        for (int j = 0; j < n; j++)
        {
            int p = s[j][i] - 'A';
            freq[p]++;
        }
        for (int k = 0; k < 5; k++)
        {
            // cout << freq[k];
            mx = max(mx, freq[k]);
        }
        // cout << el;
        count += mx * a[i];
    }
    cout << count << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
