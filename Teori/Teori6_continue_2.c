#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 11; i <= 20; i++){
        if (i % 3 == 0) continue;
            printf("%d\n", i);
    }
    printf("selesai\n");

    return 0;
}