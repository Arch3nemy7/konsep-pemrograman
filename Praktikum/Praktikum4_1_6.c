#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, hasil;

    puts("#------Output bilangan ganjil dan bilangan genap sampai bilangan ke-n-----#");
    printf("Masukkan sembarang bilangan positif : ");
    if ((scanf("%i", &bil) == 1) && (bil > 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan POSITIF!");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= bil; i++){
        if (i % 2 != 0)
            printf("%i ", i);
        else
            printf("-%i ", i);
    }

    return 0;
}