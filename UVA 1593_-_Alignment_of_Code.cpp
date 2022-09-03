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
    vector<vector<string>> vv(1005);
    int i = 0;
    map<int, int> mp;
    // memset(size, 0, sizeof(size));
    while (1)
    {
        getline(cin, str);
        stringstream ss(str);
        string word;
        int k = 1;
        while (ss >> word)
        {
            vv[i].push_back(word);
            int l = max(mp[k], (int)word.size());
            mp[k] = l;
            k++;
        }
        i++;
        if (cin.eof())
            break;
    }
    for (int i = 0; i < vv.size()-1; i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
        {
            if (j == vv[i].size() - 1)
                cout << vv[i][j] << el;
            else
            {
                int x = vv[i][j].size();
                int diff = mp[j + 1] - x;
                cout << vv[i][j] << " ";
                // cout<<vv[i][j]<<" "<<x<<" : "<<diff<<"   ";
                if (diff > 0)
                    for (int k = 0; k < diff; k++)
                    {
                        cout << " ";
                    }
            }
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
