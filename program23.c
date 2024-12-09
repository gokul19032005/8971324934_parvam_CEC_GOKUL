/*Fibinocci Series of nth numbers */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms:\n ");
    scanf("%d",&n);
    int t1=0,t2=2000;
    printf("Fibonacci Series: %d %d",t1,t2);
    for(int i=2;i<n;i++)
    {
        int next = t1 + t2;
        printf(" %d\n",next);
    }
    return 0;
}