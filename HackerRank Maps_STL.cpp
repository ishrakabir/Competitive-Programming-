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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            string s;
            int p;
            cin >> s >> p;
            auto it = mp.find(s);
            if (it == mp.end())
                mp.insert({s, p});
            else
                mp[s] += p;
        }
        else if (x == 2)
        {
            string s;
            cin >> s;
            auto it = mp.find(s);
            if (it != mp.end())
                mp.erase(it);
        }
        else if (x == 3)
        {
            string s;
            cin >> s;
            auto it = mp.find(s);
            if (it != mp.end())
                cout << (*it).second << el;
            else
                cout << 0 << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
