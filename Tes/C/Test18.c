#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10] = {};

    system("cls");
    
    for(int i = 0; i < 10; i++){
        scanf("%i", &num[i]);
    }
    
    for(int i = 0; i < 10; i++){
        printf("%i ", num[i]);
    }
}
