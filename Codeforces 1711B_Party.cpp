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
    cin>>t;
    w(t)   
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int arr[n];
        memset(arr,0,sizeof(arr));
        int ans=INF;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            // cout<<v[x-1]<<" "<<v[y-1]<<el;
            arr[x-1]++;
            arr[y-1]++;
            ans=min(ans,v[x-1]+v[y-1]);
        }
        // cout<<ans<<"   " ;
        if(m%2==0)
        cout<<0<<el;
        else
        {
            
            for(int i=0;i<n;i++)
            {
                // cout<<arr[i]<<" ";
               if(arr[i]%2==1)
            //    cout<<v[i]<<" ";
                ans=min(ans,v[i]);
            }
            // cout<<el;
            cout<<ans<<el;
        }
    }
}

int main()
{
    fast;
    solve();
    //     test;
}
