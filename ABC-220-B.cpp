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
int val(char c) {
   if (c >= '0' && c <= '9')
      return (int)c - '0';
   else
      return (int)c - 'A' + 10;
}

int convert_decimal(char *str, int base) {
   int len = strlen(str);
   int power = 1;
   int num = 0;
   int i;
   for (i = len - 1; i >= 0; i--) {
      if (val(str[i]) >= base) {
         printf("Invalid Number");
         return -1;
      }
      num += val(str[i]) * power;
      power = power * base;
   }
   return num;
}

void solve()
{

   int k;
   cin>>k;
   char str1[100000],str2[100000];
   cin>>str1>>str2;
   ll a=convert_decimal(str1, k);
   ll b=convert_decimal(str2, k);
   cout<<a*b<<endl;


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
