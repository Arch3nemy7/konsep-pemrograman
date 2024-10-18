#include <stdio.h>

int main()
{
    float x, y;

    puts("3x^2 - 5x + 6 = ?");
    printf("Masukkan nilai x yang Anda inginkan : ");
    scanf("%f", &x);

    y = 3 * x * x - 5 * x + 6;

    printf("Hasil 3x^2 - 5x + 6 = ? dengan x = %f adalah %.2f", x, y);

    return 0;
}