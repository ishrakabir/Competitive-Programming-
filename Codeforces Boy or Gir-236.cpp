#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int count = 0;
    cin>>a;
     sort(a.begin(), a.end());
    for(int i=0; i<a.size()-1; i++)
    {
            if(a[i]!=a[i+1])
            {
                count++;
            }
    }

    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}
