#include <iostream>
using namespace std;

void identifier(char n)
{
    if((n>=65 && n<=90)||(n>=97&&n<=122))
    {
        cout<<"Aphabet";
    }
    else if(n>=47 && n<=57)
    {
        cout<<"Digits";
    }
    else
    {
        cout<<"Special Character";
    }

}


int main()
{
 char d;
 cout<<"Enter :";
 cin>>d;

 int p= d;


 identifier(p);

return 0;
}
