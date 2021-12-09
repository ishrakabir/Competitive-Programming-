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
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second > b.second;
}
void sort(map<string, int> &M)
{
    vector<pair<string, int>> A;
    for (auto &it : M)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    vector<int> v;
    for (auto &it : A)
    {

        v.push_back(it.second);
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
void solve()
{

    int n, m;
    cin >> n >> m;
    int arr[n];
    loop(i, 0, n)
    {
        cin >> arr[i];
    }
    map<string, int> mp;
    loop(i, 0, m)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    vector<pair<string, int>> A;
    for (auto &it : mp)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    vector<int> v;
    for (auto &it : A)
    {

        v.push_back(it.second);
    }
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    int sum = 0;
    sort(arr, arr + n);
    for (int i = 0; i < v.size(); i++)
    {
        sum += (v[i] * arr[i]);
    }
    sort(arr, arr + n, greater<int>());
    cout << sum << " ";
    sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += (v[i] * arr[i]);
    }
    cout << sum << el;
}

int main()
{
    fast;
    solve();
    //     test;
}
