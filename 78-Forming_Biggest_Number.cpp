#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()

{
    string str ="53214";
    sort(str.begin(),str.end(),greater<int>());

    cout<<str<<endl;
}