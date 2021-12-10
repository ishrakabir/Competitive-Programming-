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
    ll v1[n], v2[n];
    for (int i = 1; i <= n; i++)
        cin >> v1[i];
    set<pair<ll, ll>> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> v2[i];
        st.insert(make_pair(v2[i], i));
    }

    ll x, y;
    w(m)
    {
        ll sum = 0;
        cin >> x >> y;
        ll rem = y;
        ll mn = min(v1[x], rem);
        sum += (mn * v2[x]);
        rem -= mn;
        v1[x] -= mn;
        while (1)
        {
            if (rem <= 0 || st.size() <= 0)
                break;
            else
            {

                ll p = st.begin()->second;
                mn = min(v1[p], rem);
                sum += mn * v2[p];
                rem -= mn;
                v1[p] -= mn;
                if (v1[p] == 0)
                    st.erase(st.begin());
            }
                }
        if (rem > 0)
            cout << 0 << el;
        else
            cout << sum << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
