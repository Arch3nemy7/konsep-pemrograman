#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int jam, menit;

    puts("#------Mengkonversi waktu ke n jam n menit ke n menit------#");
    printf("Masukkan waktu yang ingin dikonversi dengan format n jam n menit : ");
    scanf("%i jam %i menit", &jam, &menit);

    menit = ((jam * 60) + menit);

    printf("Output %i menit", menit);

    return 0;
}