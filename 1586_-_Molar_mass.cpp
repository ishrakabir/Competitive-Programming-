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
        double c = 12.010, h = 1.008, o = 16.000, n = 14.010;
        string s;
        cin >> s;
        double sum = 0;

        for (int i = 0; i < s.size();)
        {
            char ele = s[i];
            string num = "";
            i++;
            while (s[i] >= '0' && s[i] <= '9')
            {
                num += s[i];
                i++;
            }
            // cout << ele << " " << num << el;
            stringstream geek(num);
            int x = 0;
            geek >> x;
            if (x == 0)
                x = 1;
            if (ele == 'C')
            {
                sum += c * x;
            }
            else if (ele == 'H')
            {
                sum += h * x;
            }
            else if (ele == 'O')
            {
                sum += o * x;
            }
            else if (ele == 'N')
            {
                sum += n * x;
            }
        }
        cout << fixed << setprecision(3) << sum << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
