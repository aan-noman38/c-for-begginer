#include <stdio.h>

int main() {

char operator;

float n1, n2;

printf("Enter an operator (+, -, *, /): ");

scanf("%c", &operator);

printf("Enter two operands: ");

scanf("%f %f",&n1, &n2);

switch(operator)

{

case '+':

printf("%.2f + %.2f = %.2f",n1, n2,
n1+n2);

break;

case '-':

printf("%.2f - %.2f = %.2f",n1, n2, n1-n2);

break;

case '*':

printf("%.2f * %.2f = %.2f",n1, n2,
n1*n2);

break;

case '/':

printf("%.2f / %.2f = %.2f",n1, n2, n1/n2);

break;

// operator doesn't match any case
constant +, -, *, /

default:

printf("Error! operator is not correct");

}

return 0;
