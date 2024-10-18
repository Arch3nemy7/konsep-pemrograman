#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, hasil = 1;

    puts("#------Menghitung faktorial bilangan n!-----#");
    printf("Masukkan sembarang bilangan positif : ");
    if ((scanf("%i", &bil) == 1) && (bil > 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan POSITIF!");
        exit(EXIT_FAILURE);
    }

    printf("Hasil dari");

    for (int i = 1; i <= bil; i++){
        hasil = hasil * i;
        
        if (i != bil)
            printf(" %i *", i);
        else
            printf(" %i", i);
    }

    printf(" Adalah = %i", hasil);

    return 0;
}