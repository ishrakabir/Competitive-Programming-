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
#define ell cout << el << el
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

    string s;
    vector<pair<string, string>> all_books;
    map<string, bool> returned, borrowed;
    while (getline(cin, s) && s != "END")
    {
        auto pos = s.rfind('"');
        auto book = s.substr(0, pos + 1), author = s.substr(pos + 5);
        all_books.push_back(make_pair(author, book));
        returned[book] = 0, borrowed[book] = 0;
    }
    sort(all_books.begin(), all_books.end());
    // for(auto it:all_books)
    //     cout << it.first << " " << it.second << el;
    while (getline(cin, s))
    {
        auto cmd = s.substr(0, 6);
        // cout << cmd << el;
        if (cmd == "END")
            break;
        if (cmd == "SHELVE")
        {
            string last;
            for (auto it : all_books)
            {
                if (borrowed[it.second] == 0)
                    last = it.second;
                else if (returned[it.second] == 1)
                {
                    if (last.length() > 0)
                        cout << "Put " << it.second << " after " << last << el;
                    else
                        cout << "Put " << it.second << " first" << el;
                    last = it.second;
                    borrowed[it.second] = 0;
                }
            }
            cout << "END" << el;
            continue;
        }
        auto book = s.substr(7);
        if (cmd == "BORROW")
            borrowed[book] = 1;
        else if (cmd == "RETURN")
            returned[book] = 1;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
