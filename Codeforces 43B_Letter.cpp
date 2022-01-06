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

    string str;
    getline(cin, str);
    sort(str.begin(), str.end());
    string str1;
    getline(cin, str1);
    sort(str1.begin(), str1.end());
    string stru, strl;
    string str1u, str1l;
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
            stru += str[i];
        else if (islower(str[i]))
            strl += str[i];
    }
    for (int i = 0; i < str1.size(); i++)
    {
        if (isupper(str1[i]))
            str1u += str1[i];
        else if (islower(str1[i]))
            str1l += str1[i];
    }
    // cout << stru << "   " << strl << el;
    // cout << str1u << "   " << str1l << el;
    map<char, int> Mu;
    map<char, int> Ml;
    for (int i = 0; stru[i]; i++)
    {

        if (Mu.find(stru[i]) == Mu.end())
        {
            Mu.insert(make_pair(stru[i], 1));
        }

        else
        {
            Mu[stru[i]]++;
        }
    }
    for (int i = 0; strl[i]; i++)
    {

        if (Ml.find(strl[i]) == Ml.end())
        {
            Ml.insert(make_pair(strl[i], 1));
        }

        else
        {
            Ml[strl[i]]++;
        }
    }
    map<char, int> M1u;
    map<char, int> M1l;
    for (int i = 0; str1u[i]; i++)
    {

        if (M1u.find(str1u[i]) == M1u.end())
        {
            M1u.insert(make_pair(str1u[i], 1));
        }

        else
        {
            M1u[str1u[i]]++;
        }
    }
    for (int i = 0; str1l[i]; i++)
    {

        if (M1l.find(strl[i]) == M1l.end())
        {
            M1l.insert(make_pair(str1l[i], 1));
        }

        else
        {
            M1l[str1l[i]]++;
        }
    }
    // for (auto it : Mu)
    //     cout << it.first << "=" << it.second << "  ";
    // cout << el;
    // for (auto it : Ml)
    //     cout << it.first << "=" << it.second << "  ";
    // cout << el;
    // for (auto it : M1u)
    //     cout << it.first << "=" << it.second << "  ";
    // cout << el;
    // for (auto it : M1l)
    //     cout << it.first << "=" << it.second << "  ";
    // cout << el;
    bool flag = 0;
    for (auto it : M1u)
        if (it.second > Mu[it.first])
        {
            flag = 1;
            break;
        }
    for (auto it : M1l)
        if (it.second > Ml[it.first])
        {
            flag = 1;
            break;
        }
    if (flag == 1)
        cout << "NO" << el;
    else
        cout << "YES" << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
