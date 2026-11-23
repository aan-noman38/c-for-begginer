#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,n ,pos,val;
 printf("array size: ");
  scanf("%d",&n);
int a[n+1];
  printf("enter element: ");
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enetr pos: ");
  scanf("%d",&pos);
  printf("enetr val: ");
  scanf("%d",&val);
  for(i=n;i>=pos-1;i--)
  {
      a[i+1]=a[i];


  }
  a[pos-1]=val;

  for (i=0;i<=n;i++)
  {
      printf("%d\n",a[i]);
  }

  return 0;
}
