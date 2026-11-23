#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter weekday number: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1 :
        printf("saturday");
        break;
    case 2 :
        printf("sunday");
        break;
    case 3 :
        printf("monday");
        break;
    case 4 :
        printf("tuesday");
        break;
    case 5 :
        printf("wednesday");
        break;
    case 6 :
        printf("thusrsday");
        break;
    case 7 :
        printf("friday");
        break;
        default
    }

    return 0;
}
