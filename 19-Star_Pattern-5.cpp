//HALF PYRAMID OF NUMBERS

//HALF PYRAMID AFTER 180 DEGREE ROTATION

# include <iostream>
using namespace std;

int main()
{
    int n;//5
    cout<<"Enter the Number : ";
    cin>>n;
    
    for(int i = 1 ; i<=n ; i++ ) // i=5
    {
        for(int j = 1 ; j<=i ; j++)
        {
            cout<<i;
        }
    cout<<endl;
    }

}


int k = 2 * n - 2;
 
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < k; j++)
            cout << " ";
 
        k = k - 2;
        for (int j = 0; j <= i; j++)
        {
              cout << "* ";
        }
 
    
        cout << endl;