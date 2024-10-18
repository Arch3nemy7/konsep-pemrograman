#include <stdio.h>
#include <stdlib.h>

#define MAKS 8

int main()
{
    int biner[MAKS] = {0, 0, 0, 0, 0, 0, 0, 0}, sisa, bil;

    scanf("%i", &bil);
    
    for (int i = MAKS - 1; i <= 0; i--) {
        bil = bil / 2;
        if (bil == 1 || bil == 0)
            break;
        else
            biner[i] = 1;
    }
    
    for (int i = 0; i < MAKS; i++) {
        printf("%i", biner[i]);
    }



    return 0;
}