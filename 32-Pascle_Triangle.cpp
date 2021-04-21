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
    int n;  //5
    cout<<"Enter n:";
    cin>>n;
    
    for(int i=0 ;i<n;i++)
    {
            for(int j=0 ; j<=i ;j++)
            {
                cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
            }
            cout<<endl;
}
return 0; 
}

