#include <iostream>
using namespace std;

int main()
{
    
    int a;
    int b;
    cin>>a>>b;
    int i;
    
    for(int n=a ; n<=b ;n++)
    {
        int i;
        for(i = 2 ; i<n ;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
    if(n==i)
     {
         cout<<n<<endl;
     }   
    }

}