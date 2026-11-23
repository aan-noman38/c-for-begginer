#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter upercase caracter: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'A':
        printf("vowel");
        break ;
    case'E':
        printf("vowel");
        break ;
    case 'I' :
        printf("vowel");
        break ;
    case 'O' :
        printf("vowel");
        break ;
    case 'U' :
        printf("vowel");
        break ;
    default:
        printf("consonant");
    }
    return 0;
}
