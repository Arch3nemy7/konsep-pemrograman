#include <stdio.h>

int main()
{
    int i, bil, j;

    j = 0;

    printf("Masukkan sembarang bilangan : ");
    scanf("%i", &bil);

    for (i = 1; i <= bil; i++){
        if (bil % i == 0){
            j = ++j;
        }
    }

    if (j == 2){
        printf("%i merupakan bilangan prima", bil);
    } else
        printf("%i bukan merupakan bilangan prima", bil);

    return 0;
}