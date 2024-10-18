#include <stdio.h>
#include <stdlib.h>

#define MAKS 20

void pemasukan_data(float []);
void pengurutan_data(float []);
void penampilan_data(float []);
int jml;

void main(){
    float data[MAKS];

    pemasukan_data(data);
    pengurutan_data(data);
    penampilan_data(data);

    return 0;
}

void pemasukan_data(float x[]){
    int i;
    
    printf("Jumlah data = ");
    scanf("%d", &jml);

    for(i = 0; i < jml; i++){
        printf("Data ke-%d : ", i+1);
        scanf("%f", &x[i]);
    }
}

void pengurutan_data(float x[]) {
    int i, j;
    float smtr;
    
    for(i=0; i<jml-1; i++){
        for(j=i+1; j<jml; j++){
            if(x[i] > x[j]){
                smtr = x[i];
                x[i] = x[j];
                x[j] = smtr;
            }
        }
    }
}

void penampilan_data(float x[]) {
int i;
printf("\nData setelah diurutkan :\n\n");
for (i=0; i<jml; i++)
printf("Data ke-%d : %g\n", i+1, x[i]);
}