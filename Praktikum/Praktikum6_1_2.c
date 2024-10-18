#include <stdio.h>
#include <stdlib.h>

#define MAKS 100

int input(void);
void fibonacci(int);

int main()
{
    int batas;

    system("cls");

    puts("#------Mencetak deret bilangan fibonacci sesuai dengan batas deret yang ditentukan------#");
    batas = input();
    fibonacci(batas);

    return 0;
}

int input(void)
{
    int limit;

    printf("Masukkan batas bilangan fibonacci : ");
    if (scanf("%i", &limit) == 1)
        limit = limit;
    else {
        printf("Masukkan batas bilangan yang benar!");
        exit(EXIT_FAILURE);
    }

    return limit;
}

void fibonacci(int maksimal)
{
    int i, numbers[MAKS];

    for(i = 0; i < maksimal; i++){
        if(i == 0){
            numbers[i] = 0;
            printf("0 ");
        }
        else if (i == 1){
            numbers[i] = 1;
            printf("1 ");
        }else{
            numbers[i] = numbers[i - 1] + numbers[i - 2];
            printf("%i ", numbers[i]);
        }      
    }
}