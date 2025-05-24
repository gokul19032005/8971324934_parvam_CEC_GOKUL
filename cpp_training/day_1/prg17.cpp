#include <iostream>
#include <math.h>  
#include <string>
using namespace std;
int main()
{
    int n,deci,i;
    string binary="";
    cout<<"please enter the number:";
    cin>>n;
    while(n>0)
    {
        binary =to_string(n%2)+binary;
        n=n/2;
        cout<<"binary number:"<<binary<<"\n";
    }
    return 0;
}