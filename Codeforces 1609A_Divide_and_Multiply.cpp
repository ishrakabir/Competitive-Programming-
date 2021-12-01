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

    int t;
    cin >> t;
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int count = 0;
        ll sum = -INF;
        for (int i = 0; i < n; i++)
        {
            vector<ll> v;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (arr[j] % 2 == 0)
                    {
                        while (arr[j] % 2 == 0)
                        {
                            arr[j] = arr[j] / 2;
                            count++;
                        }
                    }
                    v.push_back(arr[j]);
                    ll p = arr[i];
                    for (int k = 1; k <= count; k++)
                        p = (p * 2);
                    ll sum1 = p;
                    for (int l = 0; l < v.size(); l++)
                        sum1 += v[l];
                    sum = max(sum, sum1);
                }
            }
        }
        if (sum == -INF)
            cout << arr[0] << el;
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
