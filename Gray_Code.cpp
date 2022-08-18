#include <bits/stdc++.h>
using namespace std;
 
vector<string> generateGray(int n)
{
    if(n<=0)
        return{"0"};
 
    if(n==1)
        return{"0","1"};
 
    vector<string>arr1=generateGray(n-1);
    vector<string>arr2;
    for(int i=0; i<arr1.size(); i++)
    {
        string s=arr1[i];
        arr2.push_back("0"+s);
    }
    for(int i=arr1.size()-1; i>=0; i--)
    {
        string s=arr1[i];
        arr2.push_back("1"+s);
    }
return arr2;
 
}
 
 
 
int main()
{
 
    int n;
    cin>>n;
    generateGray(n);
    vector<string>arr=generateGray(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
 
 