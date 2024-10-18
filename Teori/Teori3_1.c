#include <stdio.h>

int main()
{
    int bil;

    printf("Masukkan sembarang bilangan : ");
    scanf("%i", &bil);

    if (bil % 2 == 0)
    {
        printf("%i merupakan bilangan genap", bil);
    } else
        printf("%i merupakan bilangan ganjil", bil);
    
    return 0;
}
