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
        string s, t;
        cin >> s >> t;
        vector<string> str;
        vector<string> instr;
        string p = "";
        for (int i = 1; i < s.size(); i++)
        {

            if (s[i] == ',' || s[i] == '}')
            {
                if(!p.empty())
                str.push_back(p);
                p = "";
            }
            else
            {
                p += s[i];
            }
        }
        p = "";
        for (int i = 1; i < t.size(); i++)
        {

            if (t[i] == ',' || t[i] == '}')
            {
                 if(!p.empty())
                instr.push_back(p);

                p = "";
            }
            else
            {
                p += t[i];
            }
        }
        // cout << str.size() << " " << instr.size() << el;
        map<string, string> mp1;
        for (int i = 0; i < str.size(); i++)
        {
            int x = str[i].find(":");
            string l = str[i].substr(0, x);
            string r = str[i].substr(x + 1);
            mp1[l] = r;
        }
        map<string, string> mp2;
        for (int i = 0; i < instr.size(); i++)
        {
            int x = instr[i].find(":");
            string l = instr[i].substr(0, x);
            string r = instr[i].substr(x + 1);
            mp2[l] = r;
        }
        vector<string> plus, minus, into;
      
        for (auto it : mp2)
        {
            if (mp1.count(it.first) == 0)
                plus.push_back(it.first);
        }
      
        for (auto it : mp1)
        {
            if (mp2.count(it.first) == 0)
                minus.push_back(it.first);
        }
      
        for (auto it : mp1)
        {
            if (mp2.count(it.first) > 0)
            {
                if (it.second != mp2[it.first])
                    into.push_back(it.first);
            }
        }
        // cout << plus.size() << " " << minus.size() << " " << into.size() << el;
        if (plus.size() > 0)
        {
            cout << "+";
            for (int i = 0; i < plus.size(); i++)
                if (i == plus.size() - 1)
                    cout << plus[i] << el;
                else
                    cout << plus[i] << ",";
        }
         if (minus.size() > 0)
        {
            cout << "-";
            for (int i = 0; i < minus.size(); i++)
                if (i == minus.size() - 1)
                    cout << minus[i] << el;
                else
                    cout << minus[i] << ",";
        }
         if (into.size() > 0)
        {
            cout << "*";
            for (int i = 0; i < into.size(); i++)
                if (i == into.size() - 1)
                    cout << into[i] << el;
                else
                    cout << into[i] << ",";
        }
        if(plus.size()==0&&minus.size()==0&&into.size()==0)
            cout << "No changes" << el;
        cout << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
