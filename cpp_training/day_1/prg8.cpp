#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the n numbers\n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i*i;
        cout<<"sum :"<<sum<<"\n";
    }
    cout<<" Total sum : "<<sum<<"\n";
return 0;
}