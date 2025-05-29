#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout<<"enter the integer";
    cin>>number;
    {
        if(number % 2==0)
        cout<< number <<"is even=" <<"\n";
        else
        cout<< number <<"is odd="<<"\n";

    }
    return 0;

}