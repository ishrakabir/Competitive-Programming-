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
int dist[110];
void bfs(int source)
{
	queue<int>q;
	vis[source]=1;
	dist[source]=0;
	q.push(source);
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<graph[node].size();i++)
		{
			int next=graph[node][i];
			if(vis[next]==0)
			{
				vis[next]=1;
				dist[next]=dist[node]+1;
				q.push(next);
			}
		}
	}
}


void solve()
{

	int node,edge;
	cin>>node>>edge;
	for(int i=0;i<edge;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	int source;
	cin>>source;
	bfs(source);
	cout<<"From node : "<<source<<endl;
	for(int i=1;i<=node;i++)
	{
		cout<<"distance of "<<i<<" is : "<<dist[i]<<endl;
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


