#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter the number: ");
    scanf("%d",&a);
    b=(a%2);
    switch (b)
    {
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
        break;
    }
    return 0;
}
