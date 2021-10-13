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


void solve()
{

	int n;
	cin>>n;
	char arr[n][n];
	loop(i,0,n)
	{
		loop(j,0,n)
		{
			cin>>arr[i][j];
		}
	}
	char diag=arr[0][0];
	char other=arr[0][1];
	if(diag==other)
	{
		cout<<"NO"<<endl;
		return;
	}
	int flag=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{

				if(arr[i][j]==diag)
				{
					diag=arr[i][j];
					count++;
				}
				else
				{
					flag=1;
					break;
				}
				// cout<<arr[i][j]<<" ";
			}
			else if((i+j)==(n-1))
			{
				if(arr[i][j]==diag)
				{
					diag=arr[i][j];
					count++;
				}
				else
				{
					flag=1;
					break;
				}
				// cout<<arr[i][j]<<" ";
			}
			else if(i!=j && (i+j)!=(n-1))
			{
				if(arr[i][j]==other)
					continue;
				else
				{
					flag=1;
					break;
				}
			}	
		}
	}
	if(flag==0&&count==2*n-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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


