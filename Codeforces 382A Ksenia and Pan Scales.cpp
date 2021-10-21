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

	string s,t,p1,p2;
	cin>>s>>t;
	int count1=0,count2=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='|')
			break;
		else
			count1++;
	}
	p1=s.substr(0,count1);
	p2=s.substr(count1+1,s.size());
	// cout<<p1<<" "<<p2;
	count2=s.size()-count1-1;
	int ans=0;
	// if(count1>count2)
	// 	{
	// 		ans=(count1+count2+t.size())-count2;
	// 		// ans=count2+(t.size());
	// 		if(ans!=count1)
	// 			cout<<"Impossible"<<endl;
	// 		else
	// 			cout<<s<<t;
	// 		return;
	// 	}
	// else
	// 	{
	// 		ans=count1+(t.size());
	// 		if(ans!=count2)
	// 			cout<<"Impossible"<<endl;
	// 		else
	// 			cout<<p1<<t<<"|"<<p2<<endl;
	// 		return;
	// 	}
	for(int i=0;i<t.size();i++)
	{
		if(p1.size()<=p2.size())
			p1+=t[i];
		else
			p2+=t[i];
	}
	if(p1.size()==p2.size())
     	cout<<p1<<"|"<<p2<<endl;
    else
    	cout<<"Impossible"<<endl;



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


