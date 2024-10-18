#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_belanja;

    puts("#------Menentukan apakah saya mendapat diskon------#");
    printf("Silakan input nominal total belanjaan Anda : ");

    if ((scanf("%i", &total_belanja) == 1) && (total_belanja >= 0))
        total_belanja = total_belanja;
    else{
        puts("Masukkan total belanja Anda yang benar!");
        exit(EXIT_FAILURE);
    }

    if (total_belanja >= 100000){
        total_belanja = total_belanja - total_belanja * 0.05;
        printf("Total belanja Anda adalah Rp%i.\n", total_belanja);
    } else 
        printf("Total belanjaan Anda adalah Rp%i.\n", total_belanja);
        printf("Anda tidak mendapat diskon.\n");

    puts("Terima kasih telah berbelanja di Indomaret.");

    return 0;
}