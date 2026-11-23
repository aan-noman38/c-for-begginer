#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,l1,l2,s;
    printf("entr the array size:");
    scanf("%d",&n);
    int a[n];

    printf("enter element:");
    for (i=0; i<n; i++)
    {

        scanf("%d",&a[i]);

    }
l1=a[0];
l2=a[1];
    for(i=0; i<n; i++)
    {
        if(l2>l1)
        {
            s=l1;
            l1=l2;
            l2=l1;
        }

    }
    for(i=0; i<n; i++)
      {
          if(l1>a[i])
          {
              l1=a[i];

          }
      }
      for(i=0; i<n; i++)
      {
          if(l2>a[i])
          {
              l2=a[i];
          }
      }
      printf("l1= %d",l1);
       printf("l2= %d",l2);

    return 0;

}
