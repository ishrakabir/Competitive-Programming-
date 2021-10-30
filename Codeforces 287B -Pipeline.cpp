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

ll sum(ll n)
{
	return(n*(n+1)/2);
}

ll sum(ll s,ll e)
{
	if(s<=1)
		return sum(e);
	return sum(e)-sum(s-1);
}

ll minSplitters(ll k,ll n)
{
	ll st=1,en=k;

	while(st<en)
	{
		ll md=(st+en)/2;
		ll s=sum(md,k);
		if(s==n)
			return k-md+1;
		if(s>n)
			st=md+1;
		else
			en=md;
	}
	return k-st+2;
}

void solve()
{

	ll n,k;cin>>n>>k;
	if(n==1)
		cout<<0<<endl;
	else if(n<=k)
		cout<<1<<endl;
	else
	{
		k-=1;
		n-=1;
		if(sum(k)<n)
			cout<<-1<<endl;
		else
		{
			cout<<minSplitters(k,n)<<endl;
		}
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


