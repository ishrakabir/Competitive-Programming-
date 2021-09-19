#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int value;
    int moves;
    int start=0;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        value=s[i]-97;//to make them a=0....z=25
        moves=abs(start-value);
        if(moves<13)
            sum+=moves;
            else
                sum+=26-moves;

                  start=value;
    }

    cout<<sum;
}
