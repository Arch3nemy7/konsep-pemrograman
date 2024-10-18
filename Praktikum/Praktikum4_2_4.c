#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumkar = 0, jumpspas = 0;
    char kar;

    puts("#------Menghitung jumlah karakter dan jumlah spasi sesuai yang telah diinputkan------#");
    printf("Masukkan sembarang huruf/kata/kalimat sesuai yang Anda mau : ");

    while ((kar = getchar()) != '\n'){
        if (kar == ' ')
            jumpspas++;
        else 
            jumkar++;
    }

    printf("Jumlah karakter = %i\n", jumkar);
    printf("Jumlah spasi = %i\n", jumpspas);
    
    return 0;
}