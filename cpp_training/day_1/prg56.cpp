#include<iostream>
using namespace std;
int main()
{
    int number=20;
    int gokul=19;
    int *p;
    int *k;
    k=&gokul;
    p=&number;
    cout<<"Address of number variable is:"<<&number<<endl;
    cout<<"Address of p variable is:"<<p<<endl;
    cout<<"Value of p variable is:"<<*p<<endl;
    cout<<"Address of number variable is:"<<&gokul<<endl;
    cout<<"Address of k variable is:"<<k<<endl;
    cout<<"Value of k variable is:"<<*k<<endl;
    return 0;
}