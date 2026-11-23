#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the age: ");
    scanf("%d",&a);
    (a>18)?printf("eligible"):printf("not eligible");
    return 0;
}
