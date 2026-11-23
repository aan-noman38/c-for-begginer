#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=1, sum;
    float avrg;
    printf("enter the number: ");
    scanf("%d",&n);
    while(a<=n)
    {
       printf("%d\n",a);
       sum=sum+a;
         a++;
    }
    printf("the sum %d",sum);
    avrg= sum/n;
    printf("the avarege is %d",avrg);
    return 0;
}
