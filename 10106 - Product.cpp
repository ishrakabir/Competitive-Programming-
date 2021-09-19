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

    string a,b;
    while(cin>>a>>b)
    {
        int arr[1000]={0};
        int brr[1000],crr[1000];
        int l1=a.size()-1;
        int l2=b.size()-1;
        for(int i=l1;i>=0;i--)
        {
            brr[l1-i]=a[i]-'0';
        }


        for(int i=l2;i>=0;i--)
        {
          crr[l2-i]=b[i]-'0';
        }

        // for(int i=0;i<a.size();i++)
        //     cout<<brr[i];
        // cout<<endl;
        //   for(int i=0;i<b.size();i++)
        //     cout<<crr[i];
        // cout<<endl;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                arr[i+j]+=brr[i]*crr[j];
                arr[i+j+1]+=arr[i+j]/10;
                arr[i+j]%=10;

                // cout<<arr[i+j]<<" "<<arr[i+j+1]<<endl;
            }
        }
        int l=a.size()+b.size();
              while(arr[l]==0&&l>0)
                     {
                        l--;
                        // cout<<l;
                     }
              for(int i=l;i>=0;i--)
                     cout<<arr[i];
              cout<<endl;

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


