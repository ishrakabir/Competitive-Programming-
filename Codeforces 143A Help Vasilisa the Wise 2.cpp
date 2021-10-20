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

	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	int flag=0;
	if(r1>=10&&r2>=10&&c1>=10&&c2>=10&&d1>=10&&d2>=10)
		flag=1;

	if(flag==0&&(r1==c1+c2-r2)&&(r2==c1+c2-r1)&&(c1==r1+r2-c2)&&(c2==r1+r2-c1)&&(d1==r1+r2-d2)&&(d2==r1+r2-d1))
	{
		int a=(c1-r2+d1)/2;
		int b=r1-a;
		int c=(c1-r1+d2)/2;
		int d=r2-c;
		if((a>=1&&a<=9)&&(b>=1&&b<=9)&&(c>=1&&c<=9)&&(c>=1&&c<=9)&&(a!=b && a!=c && a!=d&&b!=c&&b!=d&&c!=d))
		cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
	else
		cout<<-1<<endl;
	}
	else
		cout<<-1<<endl;

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


