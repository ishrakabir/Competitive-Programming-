#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned ll;
using ld  = long double;
using pi  = pair<int, int>;
using pii = pair<ll, ll>;
using vi  = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

#define ci cin
#define co cout

#define PI           3.141592653589793238
#define w( n )       while( n-- )
#define fir          first
#define sec          second
#define all(x)       (x).begin(),(x).end()
#define rall(x)      (x).rbegin(),(x).rend()
#define pb           push_back
#define mp           make_pair
#define loop(i,n,x)  for(int i=n;i<x;i++)
#define sz(a)        ((int) (a).size())
#define st(x)        sort( x.begin(), x.end() )
#define For(n,x)     for(int i=1;i<=x;i++)
#define ite          iterator it
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test         ll t;cin>>t; while(t--){solve();}
#define in           insert
#define el           endl

void InputOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("G:/Code/input.txt", "r", stdin);
    freopen("G:/Code/output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}



vector<int>graph[110];
bool vis[110];
 
bool dfs(int source, int curr, int &count)
{
    if(vis[source])
        return 1;
 
    vis[source] = 1;
 
   for(int i=0;i<graph[source].size();i++) 
        {

            int next=graph[source][i];
            if(next != curr)
            {
             count++;

               if(dfs(next, source, count) == 1)
               return 1;
            }
        }
    return 0;
}


void solve()
{

    int n, m;

    cin>>n>>m;
 
    loop(i,0, m)
    {
        int x, y;
        cin>>x>>y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }
 
    int ans = 0;
 
    loop(i,0, n) 
    {
        if(!vis[i])
        {
        int cnt = 0;
        bool solve = dfs(i, -1, cnt);
        // cout<<"cnt = "<<cnt<<" ans = ";
        if(solve == 1) 
            if((cnt % 2 == 1))
              ans ++;
        // cout<<ans<<" "<<endl;
        }
    }
    if( (n - ans) % 2 == 1)
        ans++;
 
    cout<<ans;

}



int main()
{


    fast;
    InputOutput();
     solve();
//     test;



#ifndef ONLINE_JUDGE
    cerr <<el<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}


