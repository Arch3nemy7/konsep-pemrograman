#include <stdio.h>

int main()
{
    int dollar, rupiah;

    printf("Masukkan nilai uang Dollar yang ingin dikonversi ke Rupiah : ");
    scanf("%i", &dollar);

    rupiah = dollar * 11090;

    printf("Nilai $%i dalam mata uang Rupiah adalah Rp.%g", dollar, rupiah);
    
    return 0;
}