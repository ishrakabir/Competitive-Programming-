#include<bits/stdc++.h>
using namespace std;
int main()
{

    int l,i,j,cn=0;
    char s[10000];
    gets(s);
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l; i++)
    {
        if(s[i]>96&&s[i]<123)
        {
            cn++;
            if(s[i]==s[i+1])
                cn--;
        }

    }
    cout<<cn<<endl;

}
