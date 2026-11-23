#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter the character = ");
    scanf("%c", &ch);
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("this is vowel");

    }
    else
    {
        printf("this is consonnt");
    }
    return 0;
}
