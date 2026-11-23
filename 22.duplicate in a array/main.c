#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,n,j,d=0;
     printf("enter array size:");
     scanf("%d",&n);
     int a[n];
     printf("enter element:");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);

     }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
              if(a[i]==a[j])
              {
                  d++;
              }
          }
     }
     printf("total %d",d);
    return 0;
}
