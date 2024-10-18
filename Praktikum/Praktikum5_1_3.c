#include <stdio.h>
#include <stdlib.h>

float kuadrat(float n)
{
    float hasil;

    hasil = n * n;
    return printf("%g", hasil);
}

int main()
{
    float bil;

    puts("#------Hasil pengkuadratan nilai------#");
    printf("Masukkan sembarang bilangan real : ");
    if (scanf("%f", &bil) == 1)
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan REAL!");
        exit(EXIT_FAILURE);
    }
    kuadrat(bil);

    return 0;
}