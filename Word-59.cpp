#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u=0,l=0;
        string su;
        cin>>su;
        for(int i=0;i<su.size();i++)
        {
            if (su[i] >= 'A' && su[i] <= 'Z')
                u++;
            else if (su[i] >= 'a' && su[i] <= 'z')
                l++;
        }
        if(u>l)
        {
            transform(su.begin(), su.end(), su.begin(), ::toupper);
            cout<<su;
        }
        else if(l>u)
        {
            transform(su.begin(), su.end(), su.begin(), ::tolower);
            cout<<su;
        }
        else if(l==u)
        {
            transform(su.begin(), su.end(), su.begin(), ::tolower);
            cout<<su;

        }
}
