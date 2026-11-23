#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char n1[100];
   printf("enter  name: ");
   gets(n1);
  int len,i,alp=0,dig=0,sd=0;
  len= strlen(n1);
  for(i=0;i<len;i++){
   if ((n1[i]>64 && n1[i]<91) || (n1[i]>96 && n1[i]<123))
   {
      alp++;
   }
   else if(n1[i]>47 && n1[i]<58)
   {
      dig++;
   }
   else
   {
    sd++;
   }
  }
  printf("alphabet nmbr: %d\n",alp);
  printf("digit nmbr %d\n",dig);
  printf("special character nmbr %d",sd);
   return 0;

}
