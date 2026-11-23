#include <stdio.h>
#include <stdlib.h>

int main()
{
    int add,multi,divi,modul,sub,a,b;
    printf("enter the value of a,b: ");
    scanf("%d%d",&a,&b);
    add=a+b;
    multi=a*b;
    divi=a/b;
    modul=b%a;
    if(a>b)
    {
        sub=a-b;
        printf("the subtraction is :%d\n",sub);
    }
    else
    {
        sub=b-a;
        printf("the subtraction is :%d\n",sub);
    }
    printf("the addition is= %d\n", add);
    printf("the multiplication is= %d\n", multi);
    printf("the divison is = %d\n", divi);

    printf("the modulus is= %d",modul);
    return 0;

}

