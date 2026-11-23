#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    do
    {
        if(i%2==1)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        i++;
    }
    while(i<=n);

    printf("the sum is %d",sum);
    return 0;
}
