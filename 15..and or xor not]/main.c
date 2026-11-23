#include <stdio.h>
#include <limits.h>

int main() {
    int a, b,and,or,not_a,not_b,xor;


    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    and = a & b;
    or = a | b;
    xor = a ^ b;
     not_a = ~a;
    not_b = ~b;
    printf("Bitwise and %d\n", and);

    printf("bitwise or: %d\n", or);

    printf("bitwise xor %d\n", xor);


    printf("not of a: %d\n", not_a);


    printf("not of b: %d\n", not_b);
    printf("Binary representation of ~B: ");


    return 0;
}
