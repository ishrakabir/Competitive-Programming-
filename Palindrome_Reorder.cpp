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
#define np next_permutation
 
#define el endl
 
 
#define en end
d main()
{
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin>>s;
    int f[26]={0};
    for(int i=0;i<s.size();i++)
    	{
    		f[s[i]-'A']++;
    	}
 
    int count=0;
    for(int i=0;i<26;i++)
    {
 
            if(f[i]%2!=0)
                count++;
    }
 
    if(count>1)
        cout<<"NO SOLUTION"<<endl;
    else
    {
 
            vector<char>v1,v2;
            for(int i=0;i<26;i++)
            {
                if(f[i]%2!=0)
                {
                    while(f[i]--)
                    {
                        v2.push_back(i+65);
                    }
                }
                else if(f[i]>0&&f[i]%2==0)
                {
                    int x=f[i]/2;
                    while(x--)
                    {
                        v1.push_back(i+65);
                    }
                }
            }
            for(int i=0;i<v1.size();i++)
            {
 
                cout<<v1[i];
            }
            for(int i=0;i<v2.size();i++)
            {
 
                cout<<v2[i];
            }
            for(int i=v1.size()-1;i>=0;i--)
            {
 
                cout<<v1[i];
            }
    }
 
 
 
#ifndef ONLINE_JUDGE
    cerr <<el<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
 
