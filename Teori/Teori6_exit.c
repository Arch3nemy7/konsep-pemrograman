#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++){
        if (i % 4 == 0) exit(0);
        printf("%d ", i);
    }
    printf("keluar dari looping");

    return 0;
}