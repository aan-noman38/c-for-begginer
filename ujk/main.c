#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a, b , remainder;

    printf("enter two number");
    scanf("%d %d", &a,&b);
    remainder = a%b ;

    printf("the remainder is %d", remainder);

int ara[] = {10, 20, 30, 40, 50};
    int n = 5; int i;
    int temp;
    for (i = 0; i < n / 2 ; i == 1 );
    {
        // exchange value of ara[i] and ara[n-1-i] temp = ara[i];
        ara[i] = ara[n-1-i];
        ara[n-1-i] = temp ;
        }
        for (i = 0; i < n; i += 1)
        {
            printf ("%d\n", ara[i]);
    return 0 ;



}
}
