#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mins;
    cin>>n;
    int a[n];
    int a1[n], a2[n], a3[n];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int c1=0,c2=0,c3=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)
            c1++;
        else if(a[i]==2)
            c2++;
        else if(a[i]==3)
            c3++;
    }

    if(c1==0||c2==0||c3==0)
    {
        cout<<0;
        return 0;
    }
    else if(c1<=c2&&c1<=c3)
        mins=c1;
    else if(c2<=c1&&c2<=c3)
        mins=c2;
    else if(c3<=c1&&c3<=c2)
        mins=c3;
    cout<<mins<<endl;
    int in1=1,in2=1,in3=1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            a1[in1]=i;
            in1++;
        }

        if(a[i]==2)
        {
            a2[in2]=i;
            in2++;
        }
        if(a[i]==3)
        {
            a3[in3]=i;
            in3++;
        }
    }
    for(int i=1;i<=mins;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }


}

