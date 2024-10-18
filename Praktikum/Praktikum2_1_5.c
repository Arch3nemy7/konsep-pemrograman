#include <stdio.h>

int main()
{
    float a, b, c, diskriminan;

    puts("Menghitung nilai diskriminan dari sebuah persamaan kuadrat");
    printf("Masukkan nilai a, b, dan c dengan format ax^2 + bx + c : ");
    scanf("%fx^2 + %fx + %f", &a, &b, &c);

    diskriminan = b * b - 4 * a * c;

    printf("Nilai diskriminan dari fungsi persamaan kuadrat %gx^2 + %gx + %g adalah %g", a, b, c, diskriminan);

    return 0;
}