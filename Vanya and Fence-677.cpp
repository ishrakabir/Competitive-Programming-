
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,h,a[1000],sum=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
       if(a[i]<=h)
        a[i]=1;
       else if(a[i]>h)
        a[i]=2;
       sum+=a[i];
   }
   cout<<sum;
}
