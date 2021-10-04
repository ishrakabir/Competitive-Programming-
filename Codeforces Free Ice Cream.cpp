
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum=0,count=0;
    cin>>n>>x;
    sum+=x;
    for(int i=0;i<n;i++)
    {
        char c;
        int b;
        cin>>c>>b;
        if(c=='+')
        sum+=b;
        if(c=='-')
        {
            if(sum>=b)
            sum-=b;
        else if(b>sum)
            count++;
        }

    }
    cout<<sum<<" "<<count;
}
