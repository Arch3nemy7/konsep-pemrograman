#include <stdio.h>

int main()
{
    int bil, loop;

    bil = 0;
    loop = 0;

    loop = ++bil;
    printf("Loop = %i, bil = %i\n", bil, loop);

    loop = bil++;
    printf("Loop = %i, bil = %i\n", bil, loop);

    return 0;
}