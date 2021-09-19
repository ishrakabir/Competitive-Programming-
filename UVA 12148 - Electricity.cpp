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



bool isLeapY(int y)
{
    return ((y%4==0 && y%100!=0) || y%400==0);
}

bool isPrevious(int d, int m, int y, int pd, int pm, int py)
{
    if(d>1)
    {
        if(pd+1==d && m==pm && y==py) return true;
    }
    else if(y==py+1 && m==1 && pm==12 && pd==31) return true;
    else if(y==py && m==pm+1)
    {
        if(m==2 && pd==31) return true;
        if(m==3 && pd==28+isLeapY(y)) return true;
        if(m==4 && pd==31) return true;
        if(m==5 && pd==30) return true;
        if(m==6 && pd==31) return true;
        if(m==7 && pd==30) return true;
        if(m==8 && pd==31) return true;
        if(m==9 && pd==31) return true;
        if(m==10 && pd==30) return true;
        if(m==11 && pd==31) return true;
        if(m==12 && pd==30) return true;
    }
return false;
}



void solve()
{

    int n,kwh, d, pd, m, pm, y, py, pkwh;
	string s;
    
    while(cin>>n && n)
    {
        int cnt=0, ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>d>>m>>y>>kwh;
            
                if(isPrevious(d, m, y, pd, pm, py))
                {
                    cnt++;
                     ans+=(kwh-pkwh);
                }

          
            pd=d;
            pm=m;
            py=y;
            pkwh=kwh;
        }
        cout<< cnt << " "<<ans<<"\n";
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


