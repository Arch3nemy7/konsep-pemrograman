#include <stdio.h>
#include <stdlib.h>

const int MAKS = 5;

int input(int [MAKS][MAKS], int [MAKS][MAKS]);
int tambah(int, int [MAKS][MAKS], int [MAKS][MAKS]);

int main()
{
    int matriksA[MAKS][MAKS], matriksB[MAKS][MAKS], ordo;
    char kar;

    system("cls");

    do{
        puts("#------Mencari jumlah Matriks A dengan Matriks B------#");
        ordo = input(matriksA, matriksB);
        puts("\n#------Hasil------#");
        tambah(ordo, matriksA, matriksB);
        printf("Apakah Anda ingin mengulangi lagi? (y/t) : ");
        kar = getchar();
    }while (kar == 'y' || kar == 'Y');

    puts("Selesai");

    return 0;
}

int input(int matrixA[MAKS][MAKS], int matrixB[MAKS][MAKS])
{
    int i, j, ordo;

    printf("Masukkan banyak ordo (Maksimal 5) : ");
    scanf("%i", &ordo);

    puts("#------Matriks A------#");
    for (i = 0; i < ordo; i++){
        for (j = 0; j < ordo; j++){
            printf("Matriks A[%i][%i] = ", i, j);
            scanf("%i", &matrixA[i][j]);
            fflush(stdin);
        }
    }

    puts("\n#------Matriks B------#");
    for (i = 0; i < ordo; i++){
        for (j = 0; j < ordo; j++){
            printf("Matriks B[%i][%i] = ", i, j);
            scanf("%i", &matrixB[i][j]);
            fflush(stdin);
        }
    }

    return ordo;
}

int tambah(int max, int matA[MAKS][MAKS], int matB[MAKS][MAKS])
{
    int k, l, i, j, hasil = 0;

    puts("#------Isi Array A------#");
    printf("Array A : ");
    puts("");
    for (i = 0; i < max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", matA[i][j]);
        }
        puts("");
    }

    puts("#------Isi Array B------#");
    printf("Array B : ");
    puts("");
    for (i = 0; i < max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", matB[i][j]);
        }
        puts("");
    }

    puts("#------Isi Array C------#");
    printf("Array C : ");
    puts("");
    for (i = 0; i < max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", (matA[i][j] + matB[i][j]));
        }
        puts("");
    }
}