#include <stdio.h>

int main()
{
    char kar;

    printf("Masukkan sembarang huruf : ");
    kar = getchar();

    if ((kar == 'a') || (kar == 'i') || (kar == 'u') || (kar == 'e') || (kar == 'o') || (kar == 'A') || (kar == 'I') || (kar == 'U') || (kar == 'E') || (kar == 'O'))
    {
        printf("%c merupakan huruf vokal", kar);
    } else
        printf("%c merupakan huruf konsonan", kar);
    
    return 0;
}
