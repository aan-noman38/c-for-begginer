#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100],k;
int i,j,l;
printf("enter a st : ");
gets(a);
l= strlen(a);
for(i=0; i<l;i++)
{
    for(j=0;j<l-1;j++)
    {
        if(a[j]>a[j+1])
        {
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }
    }

}
printf("%s\n",a);
    return 0;
}
