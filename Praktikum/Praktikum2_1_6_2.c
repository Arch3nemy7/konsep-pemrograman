#include <stdio.h>

int main()
{
    float dollar, rupiah;

    printf("Masukkan nilai uang Dollar yang ingin dikonversi ke Rupiah : ");
    scanf("%f", &dollar);

    rupiah = dollar * 11090;

    printf("Nilai $%g dalam mata uang Rupiah adalah Rp.%g", dollar, rupiah);
    
    return 0;
}