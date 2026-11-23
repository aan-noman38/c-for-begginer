#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char n1[50],n2[90],s;
    int l1,l2,x;
    printf("enter 1st name: \n");
    gets(n1);
    printf("enter 2nd name: \n");
    gets(n2);
    x=strcmp(n1,n2);
    if(x==0)
    {
        printf("same\n");
    }
    else
    {
        printf("note same");

    }
    srtcpy(s,n1);
    srtcpy(s,n2);
    printf("joint %s",s);
    srtcpy(n1,n2);
    printf("after copy: %s",n1);
    l1=srtlen(n1);
    printf("the length : ",l1);
    return 0;

}
