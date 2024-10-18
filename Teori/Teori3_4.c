#include <stdio.h>

int main()
{
    float bil1, bil2;

    printf("Masukkan dua bilangan dengan format x / y : ");
    scanf("%f / %f", &bil1, &bil2);

    if (bil2 != 0){
        printf("Hasil %.2f / %.2f adalah %.2f", bil1, bil2, bil1 / bil2);
    } else if (bil2 == 0){
        printf("Bilangan tidak bisa dibagi dengan angka 0. Exiting.\n");
        return 0;
    } else
        printf("Masukkan kedua bilangan dengan benar. Exiting");

    return 0;
}