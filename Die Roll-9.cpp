#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,p;
  string die_roll[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
  cin>>a>>b;
  p=max(a,b);
  cout<<die_roll[6-p];

}
