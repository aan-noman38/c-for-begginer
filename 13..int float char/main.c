#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char ch;
    printf("enter  integer: ");
    scanf("%d",&a);

    printf("enter  float: ");
    scanf("%f",&b);

    getchar();
    printf("enter  character:");
    scanf("%c",&ch);

    printf("intiger is: %d\n", a);
    printf("float is: %f\n", b);
    printf("character is: %c\n", ch);

    return 0 ;


}
