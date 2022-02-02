// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using ull = unsigned ll;
// using ld = long double;
// using pi = pair<int, int>;
// using pii = pair<ll, ll>;
// using vi = vector<int>;
// using vii = vector<ll>;
// using vip = vector<pair<int, int>>;

// const int MAX_N = 1e5 + 1;
// const ll mod = 1e9 + 7;
// const ll INF = 1e9;

// #define ci cin
// #define co cout

// #define PI 3.141592653589793238
// #define w(n) while (n--)
// #define fir first
// #define sec second
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define pb push_back
// #define mp make_pair
// #define loop(i, n, x) for (int i = n; i < x; i++)
// #define sz(a) ((int)(a).size())
// #define st(x) sort(x.begin(), x.end())
// #define For(n, x) for (int i = 1; i <= x; i++)
// #define ite iterator it
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define test     \
//     ll t;        \
//     cin >> t;    \
//     while (t--)  \
//     {            \
//         solve(); \
//     }
// #define in insert
// #define el endl
// ll sparse_table1[20][200005];
// ll sparse_table2[20][200005];
// void buildSparseTable(ll arr[], ll n)
// {
//     for (ll i = 1; i <= n; i++)
//     {
//         sparse_table1[0][i] = arr[i];
//         sparse_table2[0][i] = arr[i];
//     }
//     for (ll k = 1; k <= log2(n); k++)
//     {
//         for (ll i = 1; i <= n - ((1 << k) - 1); i++)
//         {
//             sparse_table1[k][i] = min(sparse_table1[k - 1][i], sparse_table1[k - 1][i + (1 << (k - 1))]);
//             sparse_table2[k][i] = max(sparse_table2[k - 1][i], sparse_table2[k - 1][i + (1 << (k - 1))]);
//         }
//     }
// }
// ll min_query(ll l, ll r)
// {
//     ll len = r - l + 1;
//     ll k = log2(len);
//     return min(sparse_table1[k][l], sparse_table1[k][r - (1 << k) + 1]);
// }
// ll max_query(ll l, ll r)
// {
//     ll len = r - l + 1;
//     ll k = log2(len);
//     return max(sparse_table2[k][l], sparse_table2[k][r - (1 << k) + 1]);
// }
// void solve()
// {

//     int n, m;
//     cin >> n >> m;
//     int brr[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> brr[i];
//     }
//     ll arr[n];
//     for (int i = 1; i <= n - m + 1; i++)
//         arr[i] = brr[i];
//     buildSparseTable(arr, n - m + 1);
//     int p = min_query(1, n - m + 1);
//     int ans[n + 1];
//     ans[1] = p;

//     for (int j = 2, i = n - m + 2; i <= n; i++, j++)
//         ans[j] = brr[i];
//     cout << max_query(1, m) << el;
// }

// int main()
// {
//     fast;
//     solve();
//     //     test;
// }
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

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (k == 1)
    {
        cout << *min_element(arr, arr + n) << el;
    }
    else if (k > 2)
    {
        cout << *max_element(arr, arr + n) << el;
    }
    else
    {
        cout << max(arr[0], arr[n - 1]) << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
