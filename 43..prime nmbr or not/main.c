#include <stdio.h>
#include <stdbool.h>
#include<string.h>
int main()
{
    int n, i, c = 0;
    printf("Enter any number n:");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {6
        if (n % i == 0)
        {

           printf("not prime");

        }


    else
    {
        printf("%d is not a Prime number",n);
    }}
    return 0;
}
