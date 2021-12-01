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
bool func(vector<ll> v)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve()
{

    int t;
    cin >> t;
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int i = 0;
        int j = n - 1;
        bool flag = 0;
        int a, b;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                flag = 1;
                a = arr[i];
                b = arr[j];
                break;
            }
            i++;
            j--;
        }
        if (flag == 0)
        {
            cout << "YES" << el;
        }
        else
        {
            vector<ll> v1, v2;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == a)
                    continue;
                else
                    v1.push_back(arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == b)
                    continue;
                else
                    v2.push_back(arr[i]);
            }
            if (func(v1) == 1 || func(v2) == 1)
            {
                // cout << "YES" << el;
                for (int i = 0; i < v1.size(); i++)
                    cout << v1[i];
                cout << "  ";
                for (int i = 0; i < v2.size(); i++)
                    cout << v2[i];
                cout << el;
            }
            else
                cout << "NO" << el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
