#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,x,count =1,last;
    cin>>n>>r;
    for(int i=1; ;i++)
    {
        x=n*i;
        last=x % 10;
        if(last ==0 || last ==r )
            break;
        else if(last !=0 || last !=r )
            count++;
    }
    cout<<count;

}
