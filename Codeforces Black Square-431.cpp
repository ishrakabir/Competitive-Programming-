#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[100];
    string s;
    for(int i=0;i<4;i++)
    {
        cin>>n[i];
    }
    cin>>s;
   int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            sum+=n[0];
        else if(s[i]=='2')
            sum+=n[1];
        else if(s[i]=='3')
            sum+=n[2];
        else if(s[i]=='4')
            sum+=n[3];

    }
    cout<<sum;
}
