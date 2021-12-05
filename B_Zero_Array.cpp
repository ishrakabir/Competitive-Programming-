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
bool areSame(ll a[], ll n)
{
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;

    if (m.size() == 1)
        return true;
    else
        return false;
}
void solve()
{

    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll sum = 0;
    ll p = accumulate(arr, arr + n, sum);
    if (p % 2 != 0)
        cout << "NO" << el;
    else
    {

        sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
        }
        if (arr[n - 1] <= sum)
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
