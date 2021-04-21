#include <bits/stdc++.h>
using namespace std;

int main()
{
  int withdraw ;
  cin>>withdraw;
  float balance;
  cin>>balance;
  
  if(withdraw>balance || withdraw%5!=0)
  {
    cout<<balance<<endl;
  }
  else
  {
      cout<<balance-withdraw-0.50<<endl;
  }

}