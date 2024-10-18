#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukkan nilai : ");
    scanf("%i", &nilai);

    if ((nilai <= 100) && (nilai > 80)){
        putchar('A');
    } else if ((nilai <= 80) && (nilai > 60)){
        putchar('B');
    } else if ((nilai <= 60) && (nilai > 55)){
        putchar('C');
    } else if ((nilai <= 55) && (nilai > 40)){
        putchar('D');
    } else if (nilai < 40){
        putchar('E');
    } else
        printf("Masukkan nilai yang benar. Exiting.");

    return 0;
}