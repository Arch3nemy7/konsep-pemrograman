#include <stdio.h>

int main()
{
    int jml_uang, sisa;

    printf("Masukkan jumlah uang : ");
    scanf("%i", &jml_uang);

    sisa = jml_uang / 100000;
    sisa = jml_uang % 100000;
    printf("% lembar 100000\n", sisa);
    jml_uang = sisa / 50000;
    sisa = sisa % 50000;
    printf("%i lembar 50000\n", jml_uang);
    jml_uang = sisa / 20000;
    sisa = sisa % 20000;
    printf("%i lembar 20000\n", jml_uang);
    jml_uang = sisa / 10000;
    sisa = sisa % 10000;
    printf("%i lembar 10000\n", jml_uang);
    jml_uang = sisa / 5000;
    sisa = sisa % 5000;
    printf("%i lembar 5000\n", jml_uang);
    jml_uang = sisa / 2000;
    sisa = sisa % 2000;
    printf("%i lembar 2000\n", jml_uang);
    jml_uang = sisa / 1000;
    sisa = sisa % 1000;
    printf("%i lembar 1000\n", jml_uang);

    return 0;
}