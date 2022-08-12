#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<long long, long long>;
using pii = pair<ll, ll>;
using vi = vector<long long>;
using vii = vector<ll>;
using vip = vector<pair<long long, long long>>;

const long long MAX_N = 1e5 + 1;
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
#define loop(i, n, x) for (long long i = n; i < x; i++)
#define sz(a) ((long long)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (long long i = 1; i <= x; i++)
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

    long long t;
    cin >> t;
    w(t)
    {
        long long n;
        cin >> n;
        long long grid[2][n];
        for (long long i = 0; i < 2; i++)
        {
            for (long long j = 0; j < n; j++)
                cin >> grid[i][j];
        }
        long long ans1 = 0, ans2 = 0, ans3 = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if (grid[0][i + 1] > ans1)
                ans1 = grid[0][i + 1] + 1;
            else
                ans1 = ans1 + 1;
        }
        if (grid[1][n - 1] > ans1)
            ans1 = grid[1][n - 1] + 1;
        else
            ans1 = ans1 + 1;

        for (long long i = n - 1; i > 0; i--)
        {
            if (grid[1][i - 1] > ans1)
                ans1 = grid[1][i - 1] + 1;
            else
                ans1 = ans1 + 1;
        }
        // cout << ans1 << el;
        ans2 = grid[1][0] + 1;
        for (long long i = 0; i < n - 1; i++)
        {
            if (grid[1][i + 1] > ans2)
                ans2 = grid[1][i + 1] + 1;
            else
                ans2 = ans2 + 1;
        }
        if (grid[0][n - 1] > ans2)
            ans2 = grid[0][n - 1] + 1;
        else
            ans2 = ans2 + 1;

        for (long long i = n - 1; i > 1; i--)
        {
            if (grid[0][i - 1] > ans2)
                ans2 = grid[0][i - 1] + 1;
            else
                ans2 = ans2 + 1;
        }
        // cout << ans2 << el;
        long long ans = min(ans1, ans2);
        // cout << ans << el;
        // if(n==2)
        // {
        //     if()
        // }
        long long flag = 0;
        long long cnt = 1, val = 0;
        for (long long i = 0; i < n -1; i++)
        {
            if (flag == 0)
            {

                // cout << grid[0][i] << " " << grid[1][i] << " ";

                if (grid[1][i] > ans3)
                {
                    ans3 = grid[1][i] + 1;
                    // cout << ans3 << " ";
                }
                else
                {
                    ans3 = ans3 + 1;
                    // cout << ans3 << " ";
                }
                // cout << grid[1][i] << " " << grid[1][i + 1] << " ";
                if (grid[1][i + 1] > ans3)
                {
                    ans3 = grid[1][i + 1] + 1;
                    // cout << ans3 << " ";
                }
                else
                {
                    ans3 = ans3 + 1;
                    // cout << ans3 << " ";
                }
                // cout << el;

                flag = 1;
            }
            else
            {
                // cout << grid[1][i] << " " << grid[0][i] << " ";

                if (grid[0][i] > ans3)
                {
                    ans3 = grid[0][i] + 1;
                    // cout << ans3 << " ";
                }
                else
                {
                    ans3 = ans3 + 1;
                    // cout << ans3 << " ";
                }
                // cout << grid[0][i] << " " << grid[0][i + 1] << " ";
                if (grid[0][i + 1] > ans3)
                {
                    ans3 = grid[0][i + 1] + 1;
                    // cout << ans3 << " ";
                }
                else
                {
                    ans3 = ans3 + 1;
                    // cout << ans3 << " ";
                }
                flag = 0;
                // cout << el;
            }
        }
        // cout << flag << el;
        if(flag==1)
        {
          if(grid[0][n-1]>ans3)
            ans3 = grid[0][n - 1] + 1;
            else
                ans3 = ans3 + 1;  
        }
        else{

        if(grid[1][n-1]>ans3)
            ans3 = grid[1][n - 1] + 1;
            else
                ans3 = ans3 + 1;
        }
            // cout << ans3 << el;
            // cout << ans1 << " " << ans2 << " " << ans3 << el;
            cout << min(ans3,ans) << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
