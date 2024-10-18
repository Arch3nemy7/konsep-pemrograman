#include <stdio.h>

int main()
{
    int jml_uang, ratusanribu, limaplhribu, duaplhribu, splhribu, limaribu, duaribu, seribu, sisa;

    printf("Masukkan jumlah uang : ");
    scanf("%i", &jml_uang);

    ratusanribu = jml_uang / 100000;
    sisa = jml_uang - (ratusanribu * 100000);
    limaplhribu = sisa / 50000;
    sisa = sisa - (limaplhribu * 50000);
    duaplhribu = sisa / 20000;
    sisa = sisa - (duaplhribu * 20000);
    splhribu = sisa / 10000;
    sisa = sisa - (splhribu * 10000);
    limaribu = sisa / 5000;
    sisa = sisa - (limaribu * 5000);
    duaribu = sisa / 2000;
    sisa = sisa - (duaribu * 2000);
    seribu = sisa / 1000;
    sisa = sisa - (seribu * 1000);

    printf("%i lembar 100000\n", ratusanribu);
    printf("%i lembar 50000\n", limaplhribu);
    printf("%i lembar 20000\n", duaplhribu);
    printf("%i lembar 10000\n", splhribu);
    printf("%i lembar 5000\n", limaribu);
    printf("%i lembar 2000\n", duaribu);
    printf("%i lembar 1000\n", seribu);

    return 0;
}