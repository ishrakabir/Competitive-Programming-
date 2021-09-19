#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],x;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }

    }

for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i][j]==1)
              {
                  x=abs(i-3)+abs(j-3);
              }
        }
    }
            cout<<endl;

    cout<<x;

}

