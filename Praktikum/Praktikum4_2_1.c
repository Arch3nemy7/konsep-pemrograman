#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;

    puts("#------Mengetik dan diakhiri dengan huruf \"X\"-----#");
    printf("Masukkan sembarang huruf/kata/kalimat sesuai yang Anda mau : ");
    scanf("%c", &kar);

    while (kar != 'X')
        kar = getchar();

    return 0;
}