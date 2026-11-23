#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1; i<=100; i++)
    {
        for(j=1; j<=1; j++)
        {
            if (i%2!=0)
                printf("%d\n",i);
        }
    }
    return 0;
}
