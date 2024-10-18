#include <stdio.h>
#include <stdlib.h>

#define MAKS 100

void input(int []);
void findmax(int []);

int banyak;

int main()
{
    int banyak, nilai[MAKS];

    system("cls");

    puts("#------Mencari bilangan terbesar------#");
    input(nilai);
    findmax(nilai);

    return 0;
}

void input(int numbers[])
{
    int i;

    printf("Masukkan banyak data yang akan Anda masukkan : ");
    if (scanf("%i", &banyak) == 1)
        banyak = banyak;
    else {
        printf("Masukkan banyak data yang benar!");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < banyak; i++){
        printf("Masukkan nilai ke-%i : ", i + 1);
        scanf("%i", &numbers[i]);
        fflush(stdin);
    }
}

void findmax(int nums[])
{
    int i, terbesar = 0;

    for(i = 0; i < banyak; i++){
        if(nums[i] > terbesar || i == 0){
            terbesar = nums[i];
        }else{
            continue;
        }
    }

    printf("Bilangan terbesarnya adalah %i", terbesar);
}
