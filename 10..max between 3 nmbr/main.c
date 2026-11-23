#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a");

        }
       // else if(b>c)
        //{
          //  printf("b");
        //}
        else
        {
            printf("c");
        }
    }
    else
       // printf(" unvalid");
    {
        if(b>c)
        {
            printf("b");
        }
        else
        {
            printf("c");
        }
    }

    return 0;
}
