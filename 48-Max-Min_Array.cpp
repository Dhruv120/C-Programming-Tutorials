#include <iostream>
#include <climits>
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
    }

    //int maxNo = INT_MIN;
    //int minNo = INT_MAX;
            //or                                  any of the two will work
    int maxNo = array[0];
    int minNo = array[0];

  

    for(int i=0 ;i<n;i++)
    {
        maxNo = max(maxNo , array[i]);
        minNo = min(minNo , array[i]);
    }

    cout<<maxNo << "   ";
    cout<<minNo;
    return 0;
}