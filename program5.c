/**/
#include<stdio.h>

int main()
{
    int no,reversedno=0,riminder,originalon,num;
    printf("Enter a number:");
    scanf("%d",&no);
    originalon=no;
    while(no!=0)
    {
        riminder=num%10;
        num/=10;
    } 
    if(originalon==reversedno)
    {
        printf("%d is palindrome.\n",originalon);
    }
    else
    {
        printf("%d is not palindrome.\n",originalon);
    }
    return 0;
}