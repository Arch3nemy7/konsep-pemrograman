#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159
#define BARIS 13
#define KOLOM 3

void radian(float [], float [BARIS][KOLOM]);
void hitung(float [], float [BARIS][KOLOM]);
void cetak(float [], float [BARIS][KOLOM]);
float cek(float);

int main()
{
    float x[BARIS] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    float data[BARIS][KOLOM];

    system("cls");
    
    puts("#------Mencari nilai sin, cos, dan tan------#");
    radian(x, data);
    hitung(x, data);
    cetak(x, data);

    return 0;
}

void radian(float derajat[BARIS], float nilai[BARIS][KOLOM])
{
    float rad;

    for(int i = 0; i < BARIS; i++){
        for (int j = 0; j < KOLOM; j++){
            nilai[i][j] = derajat[i] / 180.0f * PI;
        }
    }
}

void hitung(float degree[BARIS], float result[BARIS][KOLOM])
{
    for(int i = 0; i < BARIS; i++){
        result[i][0] = sin(result[i][0]);
        result[i][1] = cos(result[i][1]);
        result[i][2] = tan(result[i][2]);
    }
}

void cetak(float dgre[BARIS], float rslt[BARIS][KOLOM])
{
    for(int i = 0; i < BARIS; i++){
        for (int j = 0; j < KOLOM; j++){
            if(j == 0)
                printf("|sin(%g) = %f\t|\t", dgre[i], cek(rslt[i][j]));
            else if(j == 1)
                printf("|cos(%g) = %f\t|\t", dgre[i], cek(rslt[i][j]));
            else
                printf("|tan(%g) = %f\t|\n", dgre[i], cek(rslt[i][j]));
        }
    }
}

float cek(float bil)
{
    if(bil < 0.1 && bil > -0.1){
        bil = 0.0;
        return bil;
    }else if(bil > 2){
        bil = INFINITY;
        return bil;
    }else{
        return bil;
    }
}