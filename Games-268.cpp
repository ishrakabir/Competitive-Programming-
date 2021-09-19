#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int x[n],y[n];
    for(int i =0 ;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(x[i]==y[j])
            count++;
    }
    cout<<count;
}
