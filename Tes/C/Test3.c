#include <stdio.h>

int main()
{
    int total_belanja, kurang;

    puts("#------Indomaret Swalayan------#");
    printf("Silakan input nominal total belanjaan Anda : ");

    scanf("%i", &total_belanja);

    if (total_belanja >= 100000)
    {
        printf("Selamat! Anda mendapatkan hadiah.\n");
    }
    else 
    {
        kurang = 100000 - total_belanja;
        printf("Kurang Rp%i lagi untuk mendapatkan hadiah.\n", kurang);
    }

    printf("Terima kasih telah berbelanja di Indomaret.");

    return 0;
}