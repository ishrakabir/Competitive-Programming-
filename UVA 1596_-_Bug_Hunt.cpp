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
vector<string> code;
map<char, int> mp;
map<string, int> val;
int ans = -1;
void add_val(string str)
{
    stringstream ss(str.substr(2));
    int v;
    ss >> v;
    // cout << v << endl;
    mp[str[0]] = v;
}
int get_val(string str)
{
    if (str.find("[") == string::npos)
        return stoi(str);
    if (count(str.begin(), str.end(), '[') == 1)
    {
        if (val.count(str) == 0)
            return -1;
        else
            return val[str];
    }
    if (count(str.begin(), str.end(), '[') >= 2)
    {
        string st = str.substr(str.find('[') + 1);
        int p = get_val(st);
        string name = str.substr(0, 2) + to_string(p);
        if (val.count(name) == 0)
            return -1;
        else
            return val[name];
    }
}
void solve()
{

    while (1)
    {
        string str;
        cin >> str;
        if (str == ".")
            break;

        while (1)
        {
            code.push_back(str);
            cin >> str;
            if (str == ".")
                break;
        }
        for (size_t i = 0; i < code.size(); i++)
        {
            // cout << v[i] << el;
            if (code[i].find("=") == string::npos) // Not found
                add_val(code[i]);
            else
            {
                string left = code[i].substr(0, code[i].find("="));
                string right = code[i].substr(code[i].find("=") + 1);
                int rval = get_val(right.substr(0, right.find("]")));
                int lval = get_val(left.substr(left.find("[") + 1, left.find("]") - left.find("[") - 1));

                if (lval == -1 || rval == -1)
                {
                    ans = i;
                    break;
                }
                if (mp.count(code[i][0]) == 0 || lval >= mp[code[i][0]])
                {
                    ans = i;
                    break;
                }
                string name = code[i].substr(0, 2) + to_string(lval);
                val[name] = rval;
            }
        }
        cout << ans + 1 << el;
        code.clear(), val.clear(), mp.clear(),ans=-1;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
