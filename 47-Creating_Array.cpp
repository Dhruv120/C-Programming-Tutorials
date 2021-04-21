#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;

    int array[n];

    for(int i= 0; i<n ;i++)
    {
        cin>>array[i];
        cout<<endl;
    }

    for(int i= 0; i<n ;i++)
    {
        cout<<array[i]<<" ";
    }
}