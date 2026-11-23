#include <stdio.h>
void printBinary(unsigned int n)
{
    for( int i=31; i>=0; i--)
    {
        if(i%8==7) printf(" ");
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}
int main()
{
    int a,b,or,not_a,not_b,and,xor;
    printf("enter two integer :");
    scanf("%d%d",&a,&b);
    and=a&b;
    or=a|b;
    xor=a^b;
    not_a= ~a;
    not_b= ~b;
    printf("bitwise OR  : %d\n",or );
    printf("binary representation of or ");
    printBinary(or);
    printf("bitwise AND : %d\n",and );
    printf("binary representation of and");
    printBinary(and);
    printf("bitwise XOR : %d\n",xor );
    printf("binary representation of xor ");
    printBinary(xor);
    printf("bitwise not_a : %d\n",not_a );
    printf("binary representation of not_a ");
    printBinary(not_a);
    printf("bitwise not_b : %d\n", not_b);
    printf("binary representation of not_b ");
    printBinary(not_b);
    return 0;
}
