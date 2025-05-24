#include<iostream>
using namespace std;
int main()
{
    int marks1,marks2,marks3,marks4,marks5;
    float total,average;
    char grade;
    cout<<"*******************************************************************************\n";
    cout<<"                         CITY ENGINEERING COLLEGE\n";
    cout<<"                           INFORMATION SCIENCE                                 \n";
    cout<<"                                2024-2025                                      \n";
    cout<<"*******************************************************************************\n";
    cout<<"name::gokul\n";
    cout<<"father name::selvam\n";
    cout<<"********************************************************************************\n";
    cin>>marks1>>marks2>>marks3>>marks4>>marks5;
    total=marks1+marks2+marks3+marks4+marks5;
    average=total/5;
    cout<<"********************************************************************************\n";
    cout<<"total="<<total<<endl;
    cout<<"average="<<average<<endl;
    if(average>90)
    grade='A';
    else if(average>80)
    grade='B';
    else if(average>70)
    grade='C';
    else if(average>60)
    grade='D';
    else 
    grade='F';
    cout<<"grade="<<grade<<endl;
    cout<<"********************************************************************************\n";
    return 0;

}