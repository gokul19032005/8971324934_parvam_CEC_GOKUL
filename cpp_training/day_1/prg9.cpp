#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the 3 integers";
    cin>>x>>y>>z;
    if(x>y)
    cout<<"x is greater than y";
    else if(x>z)
    cout<<"x is greater than z";
    else if (y>x)
    cout<<"y is greater than x";
    else if(y>z)
    cout<<"y is greater than z";
    else
    cout<<"z is greater";
    return 0;
}