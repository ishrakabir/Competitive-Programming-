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

char graph[30][30];
int n,m;
int dx[]={-1,0,0};
int dy[]={0,-1,1};
string direction[] = {"forth","left","right"};
string str = "IEHOVA#";
vector<string>v;

bool valid(int x,int y,int index)
{
    return(x>=0 && x<m && y>=0 && y<n && graph[x][y]==str[index]);
}

void dfs(int x,int y,int index)
{
    if(index>str.size())return;

    for(int i=0;i<3;i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if(valid(next_x,next_y,index))
        {
            v.push_back(direction[i]);
            dfs(next_x,next_y,index+1);
        }
    }
}

void solve()
{

    int t;cin>>t;
    w(t)
    {
        int x,y;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        dfs(x,y,0);
        
         for(int i=0;i<v.size();i++)
          {
            if(i==v.size()-1)
                cout<<v[i];
            else
            cout<<v[i]<<" ";
           }
    cout<<endl;
    v.clear();
    }
   

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


