
#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define pb push_back
#define pf push_front
#define sz(a) a.size()
#define  pi         acos(-1.0)
#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <i+11; j++)
        {
            if ((j-i)==abs(s[j]-s[i]))
            {
                count++;
            }

        }

    }
    cout<<count<<endl;

}



int main()
{
    // int case=0;
    int tc ;
    cin>>tc;
    while(tc--)
    {
       // cout<<"Case "<<case++<<" :"<<;
        solve();
    }


}
