#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, i;

    puts("#------Menampilkan bilangan ganjil sampai bilangan ke-n kecuali bilangan kelipatan 3-----#");
    printf("Masukkan sembarang bilangan bulat : ");
    scanf("%i", &bil);

    for (i = 1; i <= bil; i++){
        if (i % 3 == 0)
            continue;
        else if (i % 2 != 0)
            printf("%i ", i);
    }
}