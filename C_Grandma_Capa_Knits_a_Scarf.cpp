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
int cnt;
string arr;
bool func(char c)
{
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
            continue;
        }
        else if (arr[i] == c)
        {
            cnt++;
            i++;
        }
        else if (arr[j] == c)
        {
            cnt++;
            j--;
        }
        else
            return false;
    }
    return true;
}
void solve()
{

    int t;
    cin >> t;
    w(t)
    {
        int n;
        cin >> n;
        cin >> arr;
        int i = 0;
        int j = n - 1;
        bool flag = 0;
        char a, b;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                flag = 1;
                a = arr[i];
                b = arr[j];
                break;
            }
            i++;
            j--;
        }
        if (flag == 0)
        {
            cout << 0 << el;
        }
        else
        {
            cnt = 0;
            int ans = INF;
            if (func(a))
                ans = min(ans, cnt);
            cnt = 0;
            if (func(b))
                ans = min(ans, cnt);
            if (ans == INF)
                cout << -1 << el;
            else
                cout << ans << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
