/*to print 4,16,36,64,.....N*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i*i);
    }
    return 0;
}    
