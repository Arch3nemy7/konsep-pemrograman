#include <stdio.h>
#include <stdlib.h>

int main()
{
    int banyak, value, urutan = 0, max = 0, min = 0;
    float rata, bil, hasil = 0;

    puts("#------Mencari total, rata-rata, nilai max, dan nilai min dari angka yang telah dimasukkan------#");
    printf("Berapa banyak data yang akan Anda masukkan : ");
    scanf("%i", &banyak);

    for (int i = 1; i <= banyak; i++){
        urutan++;

        printf("Masukkan bilangan bulat ke-%i :", urutan);
        scanf("%f", &bil);
        fflush(stdin);

        hasil = hasil + bil;
        rata = hasil / urutan;

        if (bil > max || max == 0)
            max = bil;

        if (bil < min || min == 0)
            min = bil;
    }

    printf("Nilai bilangan terkecil = %i\n", min);
    printf("Nilai bilangan terbesar = %i\n", max);
    printf("Rata-rata bilangan = %.2f\n", rata);

    return 0;
}