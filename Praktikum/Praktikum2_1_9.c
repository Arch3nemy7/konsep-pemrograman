#include <stdio.h>

int main()
{
    int hasilPertama, hasilKedua, hasilKetiga;

    puts("1. x = (2 + 3) - 10 * 2");
    puts("2. x = (2 + 3) - (10 * 2)");
    puts("3. x = 10 % 3 * 2 + 1");

    hasilPertama = (2 + 3) - 10 * 2;
    hasilKedua = (2 + 3) - 10 * 2;
    hasilKetiga = (2 + 3) - 10 * 2;

    printf("Hasil x = (2 + 3) - 10 * 2 adalah %i\n", hasilPertama);
    printf("Hasil x = (2 + 3) - (10 * 2) adalah %i\n", hasilKedua);
    printf("Hasil x = 10 %% 3 * 2 + 1 adalah %i\n", hasilKetiga);

    return 0;
}

// output : 25