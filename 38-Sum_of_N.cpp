#include <iostream>
using namespace std;


int sum1(int a)
{
    int ans=0;
    for(int i=1 ; i<=a ;i++)
    {
        ans = ans+i;
       
    }
     return ans;
}

int main()
{
    int n;
    cout<<"Enter :";
    cin>>n;

    cout<<sum1(n);
}

