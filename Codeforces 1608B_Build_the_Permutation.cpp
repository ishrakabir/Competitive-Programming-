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

    {
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) > 1 || a + b > n - 2)
        {
            cout << -1 << el;
            return;
        }

        vector<int> ans(n);
        set<int> rem;
        for (int i = 1; i <= n; i++)
            rem.insert(i);

        if (a > b)
        {
            int x = n;
            for (int i = 1, cnt = 0; cnt < a; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x--;
            }
            x = 1;
            for (int i = 2, cnt = 0; cnt < b; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x++;
            }
            for (int i = 0; i < n; i++)
            {
                if (!ans[i])
                {
                    ans[i] = *rem.rbegin();
                    rem.erase(ans[i]);
                }
            }
        }
        else if (a < b)
        {
            int x = 1;
            for (int i = 1, cnt = 0; cnt < b; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x++;
            }
            x = n;
            for (int i = 2, cnt = 0; cnt < a; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x--;
            }
            for (int i = 0; i < n; i++)
            {
                if (!ans[i])
                {
                    ans[i] = *rem.begin();
                    rem.erase(rem.begin());
                }
            }
        }
        else
        {
            int x = n;
            for (int i = 1, cnt = 0; cnt < a; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x--;
            }
            x = 1;
            for (int i = 2, cnt = 0; cnt < b; i += 2, cnt++)
            {
                ans[i] = x;
                rem.erase(x);
                x++;
            }
            for (int i = 0; i < n; i++)
            {
                if (!ans[i])
                {
                    ans[i] = *rem.begin();
                    rem.erase(rem.begin());
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << el;
        return;
    }
}

int main()
{
    fast;
    // solve();
    test;
}
