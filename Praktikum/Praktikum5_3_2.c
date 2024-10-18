#include <stdio.h>
#include <stdlib.h>

float permutasi(float, float);
float kombinasi(float, float);
float faktorial(float);

float permutasi(float n, float r)
{
    float permutation;

    permutation = faktorial(n)/faktorial(n-r);
    
    return permutation;    
}

float kombinasi(float n, float r)
{
    float combination;

    combination = faktorial(n)/(faktorial(r)*faktorial(n-r));

    return combination;
}

float faktorial (float bil)
{
    float hasil = 1;

    for (float i = 1; i <= bil; i++)
        hasil = hasil * i;

    return hasil;
}

int main()
{
    float jumlah, kriteria, hasil1, hasil2;

    puts("#------Mencari nilai permutasi dan kombinasi------#");
    printf("Masukkan banyak jumlah : ");
    scanf("%f", &jumlah);
    fflush(stdin);

    printf("Masukkan banyak kriteria : ");
    scanf("%f", &kriteria);
    fflush(stdin);

    if (jumlah < kriteria){
        puts("Nilai jumlah harus lebih besar dari kriteria!. Exiting");
        exit(EXIT_FAILURE);
    }
    else{ 
        hasil1 = permutasi(jumlah, kriteria);
        hasil2 = kombinasi(jumlah, kriteria);
    }

    printf("Nilai permutasinya adalah %g dan nilai kombinasinya adalah %g", hasil1, hasil2);

    return 0;
}