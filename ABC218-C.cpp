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

char s[201][201],temp[201][201],t[201][201];
void rotatematrix(int n)
{
     loop(i,0,n)
    {
        loop(j,0,n)
        {
            temp[i][j]=s[i][j];
        }
    }

    int x=n-1;
    loop(i,0,n)
    {
        loop(j,0,n)
        {
            s[i][j]=temp[j][x];

        }
        x--;
    }
}
 


void solve()
{

    int n;
    cin>>n;
     loop(i,0,n)
    {
        loop(j,0,n)
        {
            cin>>s[i][j];
        }
    }
     loop(i,0,n)
    {
        loop(j,0,n)
        {
            cin>>t[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        rotatematrix(n);
        // loop(i,0,n)
        // {
        //     loop(j,0,n)
        //     {
        //         cout<<s[i][j];
        //     }
        //     cout<<endl;
        // }
        int rmin1=INT_MAX,rmax1=INT_MIN,cmin1=INT_MAX,cmax1=INT_MIN;
        loop(i,0,n)
        {
            loop(j,0,n)
            {
                if(s[i][j]=='#')
                {
                    rmin1=min(rmin1,i);
                    rmax1=max(rmax1,i);
                    cmin1=min(cmin1,j);
                    cmax1=max(cmax1,j);
                }
            }
        }

        int rmin2=INT_MAX,rmax2=INT_MIN,cmin2=INT_MAX,cmax2=INT_MIN;
        loop(i,0,n)
        {
            loop(j,0,n)
            {
                if(t[i][j]=='#')
                {
                    rmin2=min(rmin2,i);
                    rmax2=max(rmax2,i);
                    cmin2=min(cmin2,j);
                    cmax2=max(cmax2,j);
                }
            }
        }
       
        if(rmax1-rmin1!=rmax2-rmin2 || cmax1-cmin1!=cmax2-cmin2)
            continue;
             bool found=true;

        for(int r1=rmin1,r2=rmin2;r1<=rmax1 && r2<=rmax2;r1++,r2++)
        {
          for(int c1=cmin1,c2=cmin2;c1<=cmax1 && c2<=cmax2;c1++,c2++)
            {
                if(s[r1][c1]!=t[r2][c2])
                {
                    found=false;
                    break;
                }
               
            }

        }
        if(found)
        {
            cout<<"Yes";
            return;
        }

    }
    cout<<"No"<<endl;
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


