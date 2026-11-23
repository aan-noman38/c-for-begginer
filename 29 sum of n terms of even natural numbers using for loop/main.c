#include <stdio.h>
#include <stdlib.h>
//Write a C program to display the sum of n terms of even natural numbers using for loop.
int main()
{
    int i,n,sum=0,even;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("the sum is %d",sum);

    return 0;
}
