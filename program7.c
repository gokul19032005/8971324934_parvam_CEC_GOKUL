/*to print the no divisible by 5 inbetween m and n */
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the range of numbers");
    scanf("%d%d",&m,&n);
    for(int i=0;i<=n;i++)
    if(i%5==0)
    printf("%d, ",i);
    return 0;

}