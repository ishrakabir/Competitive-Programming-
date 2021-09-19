#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum+=a[i];
        }
        else if(sum>0)
        {
            sum--;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}
