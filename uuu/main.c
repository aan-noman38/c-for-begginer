#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int n;
   printf("enter the number");
   scanf("%d", &n);
   //1000 , 500, 200, 100, 50, 20, 10, 5, 2, 1//
   int temp;
   temp = n/1000;
   n = n%1000;
   printf("1000$ = %d\n", temp);

   temp = n/500;
   n = n%500;
   printf("500$ = %d\n", temp);

   temp = n/200;
   n = n%200;
   printf("200$ = %d\n", temp);

   temp = n/100;
   n = n%100;
   printf("100$ = %d\n", temp);
   temp = n/50;
   n = n%50;
   printf("50$ = %d\n", temp);

   temp = n/20;
   n = n%20;
   printf("20$ = %d\n", temp);


   temp = n/10;
   n = n%10;
   printf("10$ = %d\n", temp);

   temp = n/5;
   n = n%5;
   printf("5$ = %d\n", temp);

   temp = n/2;
   n = n%2;
   printf("2$ = %d\n", temp);
   return 0;

}
