#include <stdio.h>
#include <stdlib.h>

float test(int);
float test2(int);

int main()
{
    int jumlah = 0, total = 1;

    total = test(jumlah);
    jumlah = test2(total);
    
    printf("%i\n", total);
    printf("%i", jumlah);

    return 0;    
}

float test(int total)
{
    int jumlah;

    jumlah = total + 1;

    return jumlah;
}

float test2(int jumlah)
{
    int total;

    total = total + jumlah;

    return total;
}
