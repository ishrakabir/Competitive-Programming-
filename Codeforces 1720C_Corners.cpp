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
bool isValidPos(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i > n - 1 || j > m - 1)
        return 0;
    return 1;
}
void solve()
{

    int t;
    cin >> t;
    w(t)
    {
        int n, m;
        cin >> n >> m;
        vector<string> arr;
        int zero = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            arr.pb(s);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (arr[i][j] == '0')
                {
                    zero++;
                }
                else
                    cnt++;
            }
        }
        int flag = 0;
        // cout << cnt<< " "<<zero<< el;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (arr[i][j] == '0')
                {
                    if (isValidPos(i - 1, j, n, m) && arr[i - 1][j] == '0')
                    {
                        flag = 1;
                        break;
                    }
                    if (isValidPos(i + 1, j, n, m) && arr[i + 1][j] == '0')
                    {
                        flag = 1;
                        break;
                    }
                    if (isValidPos(i, j - 1, n, m) && arr[i][j - 1] == '0')
                    {
                        flag = 1;
                        break;
                    }
                    if (isValidPos(i, j + 1, n, m) && arr[i][j + 1] == '0')
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(arr[i][j]=='1')
                {
                    if((isValidPos(i,j-1,n,m)&&isValidPos(i-1,j,n,m))&&arr[i][j-1]=='0'&&arr[i-1][j]=='0')
                    {
                        flag=1;
                        break;
                    }
                    if((isValidPos(i-1,j,n,m)&&isValidPos(i,j+1,n,m))&&arr[i-1][j]=='0'&&arr[i][j+1]=='0')
                    {
                        flag=1;
                        break;
                    }
                    if((isValidPos(i,j-1,n,m)&&isValidPos(i+1,j,n,m))&&arr[i][j-1]=='0'&&arr[i+1][j]=='0')
                    {
                        flag=1;
                        break;
                    }
                    if((isValidPos(i+1,j,n,m)&&isValidPos(i,j+1,n,m))&&arr[i+1][j]=='0'&&arr[i][j+1]=='0')
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
       if(cnt==(n*m))
           cout << cnt - 2 << el;
        else if(flag==1)
            cout << cnt << el;
        else 
        {
            if(zero==(n*m))
                cout << 0 << el;
            else
                cout << cnt - 1 << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
