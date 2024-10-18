#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int bil, i;

    puts("#------Menampilkan bilangan ganjil sampai bilangan ke-n atau kurang dari 100 kecuali bilangan kelipatan tujuh dan sebelas------#");
    printf("Masukkan sembarang bilangan bulat :");
    scanf("%i", &bil);

    for (i = 1; i < bil; i++){
        if (i > 100)
            break;        
        if ((i % 7 == 0) || (i % 11 == 0))
            continue;
        if (i % 2 != 0)
            printf("%i ", i);
    }

    return 0;
}