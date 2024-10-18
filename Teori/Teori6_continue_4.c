#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++){
        if (i % 4 == 0) continue;
        for (j = 1; j <= 10; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}