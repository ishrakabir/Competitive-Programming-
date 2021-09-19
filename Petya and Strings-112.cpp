#include<bits/stdc++.h>
using namespace std;
int main()
{
    string su,pu;
    cin>>su>>pu;
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    transform(pu.begin(), pu.end(), pu.begin(), ::toupper);
     if(su>pu)
        cout<<"1";
     else if(pu>su)
        cout<<"-1";
     else
        cout<<"0";

}
