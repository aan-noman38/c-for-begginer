#include <stdio.h>
#include <stdlib.h>

int main()
{
char a[5];
printf("enter the name");
gets(a);
switch(a)
{
case jan:
    printf("31 days");
    break;
case feb:
    printf("28 days");
    break;
}
return 0;
}
