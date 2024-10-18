#include <stdio.h>
#include <stdlib.h>

void tukar_xy(int *, int *);

int main()
{
    struct koordinat {
        int x, y;
    } posisi;

    printf("Masukkan koordinat posisi (x, y) : ");
    scanf("%i, %i", &posisi.x, &posisi.y);
    printf("x, y, semula = %i, %i\n", posisi.x, posisi.y);
    tukar_xy(&posisi.x, &posisi.y);
    printf("x, y sekarang = %i, %i\n", posisi.x, posisi.y);

    return 0;
}

void tukar_xy(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}
