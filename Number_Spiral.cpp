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
 
#define el endl
 
d main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
 
    ll t;
    ci>>t;
    w(t)
    {
      ll r,c;
      ci>>r>>c;
      ll x;
      if(c>=r)
      {
          if(c%2==0)
          {
            x=((c-1)*(c-1))+r;
          }
          else
          {
              x=((c*c)-r)+1;
          }
      }
      else
      {
        if(r%2==0)
        {
            x=((r*r)-c)+1;
        }
        else
        {
            x=((r-1)*(r-1))+c;
        }
      }
          co<<x<<el;
    }
 
 
 
 
 
#ifndef ONLINE_JUDGE
    cerr <<el<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
 