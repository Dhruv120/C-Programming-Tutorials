#include <iostream>
using namespace std;

void maximum1(int a, int b, int c)
{
    if (a>b)
    {
        if (a>c)
        {
            cout<<a;
        }
        else 
        {
            cout<<c;
        }   
    } 
    else if (b>a) 
    {
       if (b>c)
       {
           cout<<b;
       }
       else
       {
           cout<<c;
       }
       
    }
}


void minimum1(int a, int b, int c)
{
if(a<b)
    {
        if (a<c)
        {
            cout<<a;
        }
        else
        {
            cout<<c;
        }
        
    }
else if (b<a)   
{
    if(b<c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    
}

}

int main()
{
int p;
int q;
int r;

cout<<"Enter 1 :";
cin>>p;
cout<<"Enter 2 :";
cin>>q;
cout<<"Enter 3 :";
cin>>r;


cout<<"Maximum :";
maximum1(p,q,r);

cout<<endl;

cout<<"Minimum :";
minimum1(p,q,r);
return 0;
}