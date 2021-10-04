#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[5],count=0;
   for(int i=0;i<4;i++)
   {
       cin>>a[i];
   }
   sort(a,a+4);
   for(int j=0;j<4;j++)
   {
        if(a[j]==a[j+1])
            count++;
   }
   cout<<count;

}
