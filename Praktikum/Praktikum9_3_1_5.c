#include <stdio.h>
#include <stdlib.h>

struct koordinat {
    int x, y;
};

void tukar_xy(struct koordinat *);

int main()
{
    struct koordinat posisi;

    printf("Masukkan koordinat posisi (x, y) : ");
    scanf("%i, %i", &posisi.x, &posisi.y);
    printf("x, y, semula = %i, %i\n", posisi.x, posisi.y);
    tukar_xy(&posisi);
    printf("x, y sekarang = %i, %i\n", posisi.x, posisi.y);

    return 0;
}

void tukar_xy(struct koordinat *pos_xy)
{
    int z;
    z = pos_xy->x;
    pos_xy->x = pos_xy->y;
    pos_xy->y = z;
}
