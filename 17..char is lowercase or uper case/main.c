#include <stdio.h>
#include <stdlib.h>

int main()
{
 char  ch ;
 printf("enter the character = ");
 scanf("%c", &ch);
 if (ch>='a' && ch<='z')
 {
     printf("this is lowercase");
 }
 else
 {
     printf("this is a uper case");
 }
 return 0;
}
