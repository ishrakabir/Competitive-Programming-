#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int x;
    cin>>x;
    while(x--)
    {
    cin>>n;
    int s=n.size();
    if(s>10)
    cout<<n[0]<<s-2<<n[n.size()-1]<<endl;
    else
        cout<<n<<endl;

    }

}
