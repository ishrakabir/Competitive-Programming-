#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,x,y,d,i=2;
    cin>>n>>t>>k>>d;
    if(k>=n)
        {
            cout<<"NO";
            return 0;
        }

    for(int i=2;x<n;i++)
    {
        x=k*i;
        y=t*i;
    }
    if((d+t)>=y)
    cout<<"NO";
    else
        cout<<"YES";

}
