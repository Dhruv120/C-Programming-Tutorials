#include <iostream>
using namespace std;

int factorial(int n) 
int fac =1;
    for(int i=2 ; i<=n;i++)
      {
          fac = fac * i;
      }
 return fac;
}


int main()
{
    int a;
    cout<<"Enter the Number :" ;
    cin>>a;
    int ans= factorial(a);
    cout<<ans<<endl;
    return 0;
}


