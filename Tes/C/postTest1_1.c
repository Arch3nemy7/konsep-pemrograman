#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int hari, tahun, minggu, sisa;

    puts("#------Mengkonversi jumlah hari ke format n tahun, n minggu, dan n hari------#");
    printf("Masukkan berapa hari yang ingin dikonversi : ");
    scanf("%i", &hari);

    tahun = hari / 365;
    sisa = hari % 365;
    minggu = sisa / 7;
    sisa = sisa % 7;
    hari = sisa;

    printf("Hasil konversi adalah %i tahun, %i minggu, dan %i hari", tahun, minggu, hari);

    return 0;
}