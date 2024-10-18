#include <stdio.h>

#define MAKS 5

int main(){
    int i, n;
    float total = 0, rata, nilai[MAKS];
    
    printf("Berapa jumlah data? ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("Nilai ke-%d : ", i + 1);
        scanf("%f", &nilai[i]);
        total = total + nilai[i];
    }
    
    rata = total / n;
    printf("\nNilai rata-rata = %g\n", rata);
    
    return 0;
}