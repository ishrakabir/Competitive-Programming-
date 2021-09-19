#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0,y=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            x++;
        }
        else if(s[i]=='D')
        {
            y++;
        }
    }
    if(x>y)
        cout<<"Anton";
    else if(x<y)
        cout<<"Danik";
    else
        cout<<"Friendship";

}
