//HOLLOW RECTANGLE PATTERN  //done

#include <iostream>
using namespace std;

int main()
{
    int r;
    int c;
    cout<<"Enter number of Rows :" ;
    cin>>r;
    cout<<"Enter Number oF Column :";
    cin>>c;
    int i;
    int j ;

   for(int i= 1;i<=r;i++)
   {
       for(int j=1;j<=c;j++)
       {
           if(i==1||i==r||j==1||j==c)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
           
       }
       cout<<endl;
   }
return 0;
}