#include <stdio.h>
#include <stdlib.h>

#define MAKS 5

void input(void);
void hitung(void);
void tampil(void);

int matriksA[MAKS][MAKS], matriksB[MAKS][MAKS], matriksC[MAKS][MAKS], ordo, operasi;

int main()
{
    system("cls");

    input();
    hitung();
    tampil();

    return 0;
}

void input()
{
    puts("Operasi Matriks");
    puts("1. +");
    puts("2. -");
    puts("3. x");
    printf("Pilih operasi = ");
    scanf("%i", &operasi);
    printf("Masukkan ordo matriks (Maksimal 5) = ");
    scanf("%i", &ordo);

    puts("#------Matriks A------#");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("Matriks[%i][%i] = ", i + 1, j + 1);
            scanf("%i", &matriksA[i][j]);
            fflush(stdin);
        }
    }

    puts("#------Matriks B------#");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("Matriks[%i][%i] = ", i + 1, j + 1);
            scanf("%i", &matriksB[i][j]);
            fflush(stdin);
        }
    }
}

void hitung()
{
    switch (operasi)
    {
    case 1:
        puts("#------Matriks C = Matriks A + Matriks B------#");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
            }
        }
        break;
    case 2:
        puts("#------Matriks C = Matriks A - Matriks B------#");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                matriksC[i][j] = matriksA[i][j] - matriksB[i][j];
            }
        }
        break;
    case 3:
        puts("#------Matriks C = Matriks A x Matriks B------#");
        for (int i = 0; i < ordo; i++) {
            for (int j = 0; j < ordo; j++) {
                matriksC[i][j] = matriksA[i][j] * matriksB[i][j];
            }
        }
        break;
    default:
        printf("Operasi tidak ada. Exiting.");
        exit(EXIT_FAILURE);
    }
}

void tampil()
{
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("Matriks[%i][%i] = %i\n", i + 1, j + 1, matriksC[i][j]);
        }
    }
}