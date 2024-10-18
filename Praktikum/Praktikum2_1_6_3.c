#include <stdio.h>

int main()
{
    float jml_uang, ratusanribu, limaplhribu, duaplhribu, splhribu, limaribu, duaribu, seribu, sisa;

    printf("Masukkan jumlah uang : ");
    scanf("%f", &jml_uang);

    ratusanribu = jml_uang / 100000.0;
    sisa = jml_uang - (ratusanribu * 100000.0);
    limaplhribu = sisa / 50000.0;
    sisa = sisa - (limaplhribu * 50000.0);
    duaplhribu = sisa / 20000.0;
    sisa = sisa - (duaplhribu * 20000.0);
    splhribu = sisa / 10000.0;
    sisa = sisa - (splhribu * 10000.0);
    limaribu = sisa / 5000.0;
    sisa = sisa - (limaribu * 5000.0);
    duaribu = sisa / 2000.0;
    sisa = sisa - (duaribu * 2000.0);
    seribu = sisa / 1000.0;
    sisa = sisa - (seribu * 1000.0);

    printf("%g lembar 100000\n", ratusanribu);
    printf("%g lembar 50000\n", limaplhribu);
    printf("%g lembar 20000\n", duaplhribu);
    printf("%g lembar 10000\n", splhribu);
    printf("%g lembar 5000\n", limaribu);
    printf("%g lembar 2000\n", duaribu);
    printf("%g lembar 1000\n", seribu);

    return 0;
}