#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int sum =0;
    int original = n;

    while(n>0) //153
    {
        int last = n%10; //3
        sum = sum + (last*last*last); //0+3*3*3 =27
        n =n/10;
    }

    if(sum==original)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not armstrong";
    }


}