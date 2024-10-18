#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;
    
    puts("#------Mengetik dan diakhiri dengan tombol enter-----#");
    printf("Masukkan sembarang karakter : ");

    while ((kar >= 0) && (kar <= 127)){
        kar = getchar();
        if (kar == '\n')
            break;
    }

    printf("Anda menekan tombol enter");

    return 0;
}