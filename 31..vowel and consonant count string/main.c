#include <stdio.h>
#include <stdlib.h>

int main()
{  char n[100];
int vo=0,co=0;
   printf("enter lower case  name: ");
   gets(n);
  int len,i;
  len= strlen(n);
  for(i=0;i<len;i++)
  {
      if( n[i]=='a' ||n[i]=='e' ||n[i]=='i' ||n[i]=='o' ||n[i]=='u' )
      {
          vo++;
      }
      else
      {
          co++;
      }

  }
printf("vowel: %d\n",vo);
printf("consonant %d",co);
return 0;
}
