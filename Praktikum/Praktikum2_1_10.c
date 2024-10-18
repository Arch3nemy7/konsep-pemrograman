#include <stdio.h>

int main()
{
    float a, b, c, x, z, hasilY1, hasilY2;

    puts("#------------------------------------#");
    puts("y = bx2 + 0,5x - c");
    printf("Masukkan nilai b dan x dengan format b-x : ");
    scanf("%f-%f", &b, &x);

    hasilY1 = b * x * x + 0.5 * x - c;

    puts("#------------------------------------#");
    puts("y = 0,3xz / 2a");
    printf("Masukkan nilai a, x, dan z dengan format a-x-z : ");
    scanf("%f-%f-%f", &a, &x, &z);

    hasilY2 = 0.3 * x * z / 2 * a;

    puts("#------------------------------------#");
    printf("Hasil y = bx2 + 0,5x - c adalah %g\n", hasilY1);
    printf("Hasil y = 0,3xz / 2a adalah %g\n", hasilY2);

    return 0;
}