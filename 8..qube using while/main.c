#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, qube;
    printf("enter the nujmber: ");
    scanf("%d",&n);
    while(i<=n)
    {
        qube=(i * i * i);
        printf("the num %d and the queb %d is %d\n",i,i,qube);
        i++;
    }

    return 0;
}
