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
	
     double x1[10],x2[10],y1[10],y2[10];
	int i=0,x=1;
	int count=0;
	while(1)
	{
		char c;
		cin>>c;
		if(c=='*')
			break;

			cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
		i++;
		count++;
	}
	double a,b;
	while(cin>>a>>b)
	{
		if(a==9999.9&&b==9999.9)
			break;
		int flag=0;
		for(int p=0;p<10;p++)
		{
			if(a>x1[p]&&a<x2[p]&&b>y2[p]&&b<y1[p])
			{
				cout<<"Point "<<x<<" is contained in figure "<<p+1<<endl;
				flag=1;
			}
		}
		if(flag==0)
			cout<<"Point "<<x<<" is not contained in any figure"<<endl;
		x++;

	}
	return;

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


