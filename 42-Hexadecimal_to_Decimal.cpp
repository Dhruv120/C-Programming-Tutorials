#include <bits/stdc++.h>
using namespace std;


int hexadecimaltodecimal(string n)
{                                                      // 1  C  F
    int ans=0;                                         // 0  1  2
    int x=1;
                  //N =1CF
   int s = n.size();  //S =3
   for(int i = s-1 ; i>=0 ; i--)   // i=2
   {
       if(n[i]>='0' && n[i]<='9')
       {
           ans  = ans + x*(n[i] -'0');
       }
       else if (n[i]>='A' && n[i]<='F')
       {
            ans  = ans + x*(n[i] -'A'+10);
       }
       x= x*16;
   }
return ans;
}

int  main()
{
    string n;
    cout<<"Enter :";
    cin>>n;

    cout<<hexadecimaltodecimal(n)<<endl;
}