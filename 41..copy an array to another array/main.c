#include <stdio.h>
#include <stdlib.h>

int main()
{
      int i,n;
    printf("element size: ");
    scanf("%d",&n);
    int a1[n],a2[n];
    printf("enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a1[i]);
    }
      for(i=0; i<n; i++)
      {
         a2[i]=a1[i];
      }
     for(i=0; i<n; i++)
      {
          printf(" %d\n",a1[i]);
      }
       for(i=0; i<n; i++)
       {
           printf("%d\n",a2[i]);
       }
    return 0;
}
