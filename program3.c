/*c program to check if a given integer is positive or negative */
#include<stdio.h>

int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive number ",num);
    }
    else if(num<0)
    {
        printf("%d is negative number",num);
    }
    else
    {
        printf("%d is zero",num);
    }
    return 0;
    
}