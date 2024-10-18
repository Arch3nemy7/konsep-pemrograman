#include <stdio.h>
#include <stdlib.h>

#define MAKS 8

int main()
{
    int biner[MAKS] = {0, 0, 0, 0, 0, 0, 0, 0}, indeks, total = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%i", &biner[i]);
        fflush(stdin);
    }

    puts("");
    for (int i = MAKS - 1; i >= 0; i--) {
        printf("%i", biner[i]);
    }
    printf(" = ");
    
    for (int i = 0; i < MAKS; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                indeks = 1;
            else
                indeks = indeks * 2;
        }
        total = total + biner[i] * indeks;
    }

    printf("%i", total);

    return 0;
}