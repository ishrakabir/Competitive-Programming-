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

string s;
ll nb,ns,nc,pb,ps,pc,r;
ll cb,cs,cc;

bool ok(ll m)
{

	ll newb=m*cb;
	ll news=m*cs;
	ll newc=m*cc;

	ll sum=0;
	sum+=max(newb-nb,0LL)*pb;
	sum+=max(news-ns,0LL)*ps;
	sum+=max(newc-nc,0LL)*pc;

	return sum<=r;
}
void solve()
{

	cin>>s;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>r;
	cb=0,cs=0,cc=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='B')
			cb++;
		else if(s[i]=='S')
			cs++;
		else if(s[i]=='C')
			cc++;
	}
	ll l=0,r=1e15;
	while(l+1<r)
	{
		ll m=(l+r)/2;
		if(ok(m))
			l=m;
		else
			r=m;
	}
	cout<<l<<el;


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


