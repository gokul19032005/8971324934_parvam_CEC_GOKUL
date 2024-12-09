/*print the following patterns 11111\n 22222\n 33333\n 44444\n 55555\n*/
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d \n",i);
        printf("\n");
    }
    return 0;
}
