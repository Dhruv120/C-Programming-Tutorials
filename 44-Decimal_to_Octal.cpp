#include <bits/stdc++.h>
using namespace std;


int decimaltooctal(int n)
{
    int ans = 0;
    int x =1;

    while(x<=n)
    {
        x=x*8;
    }
    x=x/8;

    while(x>0)
    {
        int lastdigit = n/x;
        n= n - lastdigit*x;
        x=x/8;
        ans =ans*10 +lastdigit ;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter :";
    cin>>n;

    cout<<decimaltooctal(n)<<endl;
    return 0;
}