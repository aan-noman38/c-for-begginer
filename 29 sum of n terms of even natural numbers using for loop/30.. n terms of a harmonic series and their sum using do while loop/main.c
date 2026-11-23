b#include <stdio.h>
#include <stdlib.h>
//Write a program in C to display the n terms of a harmonic series and their sum using do while loop.
int main()
{
    int i=1,n;
    float sum=0;
    printf("enter a value: ");
    scanf("%d",&n);
    do
    {
        printf("1/%d\n",i);
        sum=sum+1/i;
        i++;
    }
    while (i<=n);
    printf("the sum is %.2f",sum);
    return 0;
}
//incomplete
