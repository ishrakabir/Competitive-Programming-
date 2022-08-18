#include<bits/stdc++.h>
using namespace std;
 
using d = int;
using ll = long long;
using ud = unsigned int;
using ull = unsigned long long;
using lf = double;
using llf = long double;
using ch = char;
using st = string;
using bl = bool;
 
#define ci cin
#define co cout
 
#define fi( x, n ) for( d i = x; i < n; i++ )
#define fj( x, n ) for( d j = x; j < n; j++ )
#define fin( x, n ) for( d i = x; i <= n; i++ )
#define fjn( x, n ) for( d j = x; j <= n; j++ )
#define wh while
#define w( n ) while( n-- )
 
#define vd vector<d>
#define vll vector<ll>
#define vlf vector<lf>
#define vc vector<ch>
#define vs vector<st>
#define sd set<d>
#define sll set<ll>
#define slf set<lf>
#define sc set<ch>
#define ss set<st>
 
#define sz(x) x.size()
#define st(x) sort( x.begin(), x.end() )
#define cou(x, y) count( x.begin(), x.end(), y )
 
#define in insert
#define ct count
#define fd find
#define pb push_back
#define er erase
#define bg begin
#define en end
#define np next_permutation
#define mod 1e9+7
#define el endl
 
void InputOutput()
{
	#ifndef ONLINE_JUDGE
	freopen("G:/Code/input.txt", "r", stdin);
	freopen("G:/Code/output.txt", "w", stdout);
	#endif
}
 
 
int main()
{
    InputOutput();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   long long n;
	cin>>n;
	long long ans = 1;
	for(long long i=0;i<n;i++)
	ans=(ans*2) % 1000000007;
	cout<<ans;
 
    
    
    
      
#ifndef ONLINE_JUDGE
    cerr <<el<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}