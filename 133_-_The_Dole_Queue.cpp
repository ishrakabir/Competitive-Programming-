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

    bool vis[21];
    int n, k, m;
    while (cin >> n >> k >> m)
    {
        if (n == 0 && k == 0 && m == 0)
            break;
        for (int i = 1; i <= 20; i++)
            vis[i] = false;
        for (int i = 1; i <= n; i++)
            vis[i] = true;
        int left = n, right = 1;
        int cnt = 0, move = 0;
        int j;
        while (move < n)
        {
            j = right;
            cnt = 0;
            while (cnt < m)
            {
                if (j == 1)
                    j = n;
                else
                    j--;
                if (vis[j] == true)
                    cnt++;
            }
            right = j;
            j = left;
            cnt = 0;
            while (cnt < k)
            {
                if (j == n)
                    j = 1;
                else
                    j++;
                if (vis[j] == true)
                    cnt++;
            }
            left = j;
            if (move > 0)
                cout << ",";
            if (left == right)
            {
                cout << setw(3) << left;
                move += 1;
            }
            else
            {
                cout << setw(3) << left << setw(3) << right;
                move += 2;
            }
            vis[left] = false;
            vis[right] = false;
        }
        cout << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
