#include <stdio.h>
#include <stdlib.h>

int tambah(int x, int y)
{
    int hsl = x + y;
    return hsl;
}

char info()
{
    return puts("B");
}

int main()
{
    int a = 6, b = 5, hsl;

    hsl = tambah(a, b);
    printf("%i\n", hsl);
    info();
    return 0;
}