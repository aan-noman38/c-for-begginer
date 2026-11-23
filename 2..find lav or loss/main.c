#include <stdio.h>
#include <stdlib.h>
//write a pgrm to find a triangel equilateral,isosceles,or scalene by sides//
int main()
{
    int cost, sell;
    printf("enter cost and sell ");
    scanf("%d%d", &cost, &sell);
    if (cost>sell)
    {
        printf("loss");
    }
    else
    {
        printf("profit");
    }
    return 0;
}
