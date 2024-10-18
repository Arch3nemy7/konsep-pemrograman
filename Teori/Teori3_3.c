#include <stdio.h>

int main()
{
    float total_belanja, kurang, potongan;

    puts("#------Indomaret Swalayan------#");
    printf("Silakan input nominal total belanjaan Anda : ");

    scanf("%f", &total_belanja);

    if (total_belanja >= 100000){
        printf("Selamat! Anda mendapatkan potongan sebesar 5%%.\n");
        total_belanja = total_belanja - (total_belanja * 00.5);
        printf("Nominal yang harus Anda bayar adalah Rp%g/n", total_belanja);
    } else {
        kurang = 100000 - total_belanja;
        printf("Mohon maaf, kurang Rp%.2f lagi untuk mendapatkan potongan sebesar 5%%.\n", kurang);
    }

    printf("Terima kasih telah berbelanja di Indomaret.\n");

    return 0;
}