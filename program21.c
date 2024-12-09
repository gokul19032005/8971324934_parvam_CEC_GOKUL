/*gokul*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    \
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    \
    if(a>b && a>c)
    \
    printf("%d is the largest number",a);
    \
    else if(b>a && b>c)
    \
    printf("%d is the largest number",b);
    \
    else
    \
    printf("%d is the largest number",c);
    \
    return 0;
    }