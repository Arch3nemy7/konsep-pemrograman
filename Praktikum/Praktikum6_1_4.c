#include <stdio.h>
#include <stdlib.h>

#define MAKS 100

int input(void);
void max(int);

int main()
{
    int batas;

    system("cls");

    puts("#------Mencari bilangan terbesar------#");
    batas = input();
    max(batas);

    return 0;
}

int input()
{
    int limit;

    printf("Berapa banyak data yang akan Anda masukkan? : ");
    if (scanf("%i", &limit) == 1)
        limit = limit;
    else {
        printf("Masukkan banyak data yang benar!");
        exit(EXIT_FAILURE);
    }

    return limit;
}

void max(int bnyk)
{
    int terbesar = 0, numbers[MAKS];;

    for (int i = 0; i < bnyk; i++){
        printf("Bilangan ke-%i : ", i + 1);
        scanf("%i", &numbers[i]);
        if (numbers[i] > terbesar || i == 0){
            terbesar = numbers[i];
        }else{
            continue;
        }
    }
    
    printf("Bilangan terbesar adalah %i", terbesar);
}