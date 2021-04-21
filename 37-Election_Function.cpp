#include <iostream>
using namespace std;

void eligible(int n)
{
    if(n>=18)
    {
        cout<<"Eligible for Voting";
    }
    else
    {
        cout<<"Not Eligible for Voting";
    }
}

int main()
{
 int age;
 cout<<"Enter the Age :";
 cin>>age;

 eligible(age);
 return 0;   
}