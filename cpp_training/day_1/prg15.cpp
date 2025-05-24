#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,digit;
    cout<<"enter the numbers\n";
    cin>>n;
    while(n>0)
    {
        
        digit=n%10;
        cout<<"digit="<<digit<<"\n";
        n=n/10;
    }
    return 0;
}