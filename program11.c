/*squaring of numbers till where the user says with one positive and one negative numbers*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the numbers:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",-i*i);
        }
        else
        {
            printf("%d\n",i*i);
        }
    }
    return 0;
}