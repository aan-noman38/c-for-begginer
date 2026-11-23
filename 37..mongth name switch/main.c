#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the month no. : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1 ://jan
        printf("31 day\n");
        break ;
    case 2 ://feb
        printf(" 28 day");
        break;
    case 3 ://mar
        printf("31 day");
        break;
    case 4 ://apr
        printf("30 day");
        break;
    case 5 ://may
        printf("31day");
        break;
    case 6 ://jun
        printf("30 day");
        break;
    case 7 ://jul
        printf("31 day");
        break;
    case 8 ://aug
        printf("31 day");
        break;
    case 9 ://sep
        printf("30 day");
        break;
    case 10 ://oct
        printf("30 day");
        break;
    case 11 ://nov
        printf("30 day");
        break;
    case 12 ://dec
        printf("31 day");
        break;
    }
    return 0;
}
