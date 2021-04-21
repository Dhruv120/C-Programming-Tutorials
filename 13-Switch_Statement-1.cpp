#include <iostream>
using namespace std;

int main()
{
   char button;
   cout<<"Input a Character : ";
   cin>>button;

   switch (button)
   {
    case 'a':
       cout<<"Hello"<<endl;
       break;
    case 'b':
       cout<<"namasta"<<endl;
       break;
    case 'c':
       cout<<"ok bye"<<endl;
       break;
    case 'd':
       cout<<"kem cho"<<endl;
       break;
    case 'e':
       cout<<"good bye"<<endl;
       break;   
   
   default:
   cout<<"Still Learning";
       break;
   }
    
return 0 ;
}