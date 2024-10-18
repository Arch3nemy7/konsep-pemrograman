#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 10; i <= 30; i+=4){
        if (i % 6 == 0){
            printf("%d habis dibagi 6 sehingga keluar dari looping", i);
            break;
        }
        printf("%d\n", i);
    }
}