#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, bil, prime;

    puts("#------Menampilkan bilangan prima sampai bilangan ke-n------#");
    printf("Masukkan sembarang bilangan bulat : ");
    scanf("%i", &bil);

    for(i = 1; i <= bil; i++){
        prime = 1;
        for(j = 2; j < i; j++){
            if (i % j == 0){
                prime = 0;
                break;
            }
        }
        if ((prime == 1) && (i != 1))
            printf("%i ", i);
    }
    

    return 0;
}