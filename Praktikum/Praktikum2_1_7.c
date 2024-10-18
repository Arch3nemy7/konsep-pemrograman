#include <stdio.h>

int main()
{
    float radius, luas;
    const float PI = 3.14;

    puts("Menghitung nilai luas lingkaran");
    printf("Masukkan panjang jari-jari lingkaran : ");
    scanf("%f", &radius);

    luas = PI * radius * radius;

    printf("Luas lingkaran yang berjari-jari %g adalah %g", radius, luas);

    return 0;
}