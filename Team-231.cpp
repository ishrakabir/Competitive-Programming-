#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,b,c,sum,x=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;


        sum=(a+b+c);
        if(sum>=2)
        {
            x++;
        }

    }
    cout<<x;
}

