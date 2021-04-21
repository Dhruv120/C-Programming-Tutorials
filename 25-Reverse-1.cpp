# include <iostream>
using namespace std;


int main()
{
   int n;
   cin>>n;

   int reverse =0;

   while(n>0) //589
   {
      int last = n%10; //5
      reverse =reverse*10 +last; //0+9 =9*10 +8 =98*10+5 =980+5 =985
      n =n/10; // 0.5 = 0
   }

   cout<<reverse;


}