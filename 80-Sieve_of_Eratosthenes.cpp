// ALL CLEAR

#include <iostream>
using namespace std;


void primesieve(int n)
{
    int prime[100] ={0};
    for(int  i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int  j= i*i;j<=n;j=j+i)
            {
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}





int main()
{
    int n,t,div=1,i,c;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        c= 0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==3)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"no";
        }
    }
}