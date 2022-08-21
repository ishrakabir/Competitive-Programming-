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

bool solve()
{

    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll pos = 0, neg = 0, nulls = 0;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            if (p != 0 || nulls == 0)
            {
                v.push_back(p);
            }
            if (p > 0)
                pos++;
            else if (p < 0)
                neg++;
            else
                nulls++;
        }
        // for (int i = 0; i < v.size();i++)
        //     cout << v[i] << " ";
        // cout << el;
        if (pos > 2 || neg > 2)
            return false;
        else
        {
            int flag = 0;
            for (ll i = 0; i < v.size(); i++)
            {
                for (ll j = i + 1; j < v.size(); j++)
                {
                    for (ll k = j + 1; k < v.size(); k++)
                    {
                        int flag = 0;
                        for (ll l = 0; l < v.size(); l++)
                        {
                            ll sum = v[i] + v[j] + v[k];
                            if (sum == v[l])
                                flag = 1;
                        }
                        if (!flag)
                            return false;
                    }
                }
            }
            return true;
        }
    }
}

int main()
{
    fast;
    // solve();
    //     test;
    ll t;
    cin >> t;
    w(t)
    {
        if (solve())
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
}
