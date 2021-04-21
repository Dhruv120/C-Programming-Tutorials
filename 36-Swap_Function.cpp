#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x ;
    x = y ;
    y = temp ;

    cout<<"After Swapping :"<<endl;
    cout<<"Value of x:"<<x<<endl;
    cout<<"Value of y:"<<y<<endl;
}

int main()
{
    int x;
    int y;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;

    swap(x,y);
}