#include <stdio.h>

int main()
{
    int nilai;

    printf("Silakan masukkan nilai Anda : ");
    scanf("%i", &nilai);

    if ((100 >= nilai) && (nilai >= 75))
    {
        printf("Selamat, Anda lulus!");
    }
    else if (((nilai <= 75) && (nilai >= 0)))
    {
        printf("Mohon maaf, Anda tidak lulus");
    }
    else 
        printf("Masukkan nilai yang benar. Exiting");

    return 0;
}