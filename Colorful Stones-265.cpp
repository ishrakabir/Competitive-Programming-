#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int count=1;
    cin>>a>>b;
    for(int i=0,j=0;i<b.size();i++)
    {

            if(b[i]==a[j])
                {
                    count++;
                j++;
                }
    }
    cout<<count;
}
