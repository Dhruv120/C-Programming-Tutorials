#include <iostream>
using namespace std;

bool evenodd(int n)
{
    if(n%2==0)
        {
            return true;
        }
return false;
}

int main()
{
    int a;
    cout<<"Enter the Number : ";
    cin>>a;

    if(evenodd(a)==true)
    {
        cout<<"Even";
    }
    if(evenodd(a)==false)
    {
        cout<<"Odd";
    }
return 0;
}