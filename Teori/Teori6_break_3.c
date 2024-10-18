#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 1; i <= 8; i++){
        for(j = 1; j <= 8; j++){
            if ((i % 2 == 0) && (j > 4)) break;
                printf("%d", i);
        }
        printf("\n");
    }
}