#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c , max;
    printf("enter three nymber");
    scanf("%d%d%d",&a,&b,&c);
    max=((a>b) && (a>c))?a:((b>c)?b:c);
    printf("the large num %d",max);
    return 0;
}
