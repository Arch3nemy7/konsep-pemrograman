#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 10; j++){
            if (j % 3 == 0) continue;
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}