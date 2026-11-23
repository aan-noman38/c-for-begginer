#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,multi;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=10)
    {
        multi=i*n;
        printf("%d x %d = %d\n",n,i,multi);
        i++;
    }
    return 0;
    }
