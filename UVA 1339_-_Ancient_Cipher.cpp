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
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int cnt1[26], cnt2[26];
        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));
        for (int i = 0; i < s1.size(); i++)
        {
            cnt1[s1[i] - 'A']++;
            cnt2[s2[i] - 'A']++;
        }
        sort(cnt1, cnt1 + 26);
        sort(cnt2, cnt2 + 26);
        int flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cnt1[i] != cnt2[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}