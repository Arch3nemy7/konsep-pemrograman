#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 10; i >= 1; i-=3){
        printf("%d\t", i);
    }

    return 0;
}