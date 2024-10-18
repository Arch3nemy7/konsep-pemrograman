#include <stdio.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4, hasilModulus, hasilPengurangan, hasilPenjumlahan;
    float hasilPembagian, operasiBilangan1, operasiBilangan2;

    hasilModulus = a % b;
    hasilPengurangan = a - c;
    hasilPenjumlahan = a + b;
    hasilPembagian = a / d;
    operasiBilangan1 = a / d * d + a % d;
    operasiBilangan2 = a % d / d * a - c;

    printf("Hasil a %% b adalah %i\n", hasilModulus);
    printf("Hasil a - c adalah %i\n", hasilPengurangan);
    printf("Hasil a + b adalah %i\n", hasilPenjumlahan);
    printf("Hasil a / b adalah %g\n", hasilPembagian);
    printf("Hasil a / d * c + a %% d adalah %g\n", operasiBilangan1);
    printf("Hasil a %% d / d * a - c adalah %g\n", operasiBilangan2);
    
    return 0;
}