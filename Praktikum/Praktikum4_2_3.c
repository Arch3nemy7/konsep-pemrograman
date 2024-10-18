#include <stdio.h>
#include <stdlib.h>

int main()
{
    int urutan = 0;
    float bil, rata, hasil = 0, max = 0, min = 0;
    char jwb = 'y';

    puts("#------Mencari total, rata-rata, nilai max, dan nilai min dari angka yang telah dimasukkan------#");
    do {
        urutan++;

        printf("Masukkan bilangan bulat ke-%i :", urutan);
        scanf("%f", &bil);
        fflush(stdin);

        printf("Mau memasukkan data lagi [y/t] ?");
        jwb = getchar();
        fflush(stdin);

        hasil = hasil + bil;
        rata = hasil / urutan;

        if (bil > max || max == 0)
            max = bil;

        if (bil < min || min == 0)
            min = bil;

    } while (jwb == 'y' || jwb == 'Y');

    printf("Total bilangan = %g\n", hasil);
    printf("Rata-rata bilangan = %.2f\n", rata);
    printf("Nilai bilangan terbesar = %.2f\n", max);
    printf("Nilai bilangan terkecil = %.2f\n", min);

    return 0;
}