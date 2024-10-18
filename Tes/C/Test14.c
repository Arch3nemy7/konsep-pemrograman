#include <stdio.h>
#include <stdlib.h>

int hasil = 0;

void test(void);

int main()
{
    int hasil;
    // hasil = test();
    printf("%i", hasil);

    return 0;
}

void test(void)
{
    printf("test coy\n");
    hasil = 69;
}
