//RECTANGLE PATTERM  //done

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
    cout<<endl;
    for(int i = 1 ; i<= r ;i++)
    {
        for(int j= 1 ; j<=c ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
