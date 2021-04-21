#include <iostream>
using namespace std;

int factorial(int a) //n=5
{
   int fac =1;
    for(int i=2; i<=a;i++)
      {
          fac = fac * i;
      }
 return fac;
}
int main()
{
    int n;
    int r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int ans1 = factorial(n);
    int ans2 = factorial(n-r);
    int ans3 = factorial(r);

    float ans = ans1/(ans2*ans3);
    cout<<ans<<endl;
}

