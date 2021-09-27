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
#define clr(a) 		 memset(a,0,sizeof(a))

void InputOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("G:/Code/input.txt", "r", stdin);
    freopen("G:/Code/output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

char graph[30][30];
bool visited[30][30];
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
int n;

bool valid(int i,int j)
{
	return (i >= 0 && j >= 0 && i < n && j < n&& !visited[i][j] && graph[i][j] == '1');
}

void dfs(int x,int y)
{
	if(visited[x][y])return;
	visited[x][y]=1;
	for(int i=0;i<8;i++)
	{
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if(valid(next_x,next_y))
			dfs(next_x,next_y);
	}
}


void solve()
{
 	int c=1;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>graph[i][j];
            }
        }

        memset(visited,0,sizeof(visited));
        int count=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                if(!visited[i][j]&&graph[i][j]=='1')
                {
                    count++;

                    dfs(i,j);
                }

            }

        }
        cout<<"Image number "<<c<<" contains "<<count<<" war eagles."<<endl;
		c++;
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
