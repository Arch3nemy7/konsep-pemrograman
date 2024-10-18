#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14;

float math(float, float);

int main()
{
    float derajat, panjang, hasil;

    puts("#------Mencari panjang sisi BC dengan panjang sisi AB dan derajat sudut A------#");
    printf("Masukkan besar derajat sudut A : ");
    scanf("%f", &derajat);
    fflush(stdin);
    printf("Masukkan besar panjang sisi AB : ");
    scanf("%f", &panjang);
    fflush(stdin);

    hasil = math(derajat, panjang);
    printf("Panjang sisi BC dengan panjang sisi AB %g satuan dan sudut A sebesar %g derajat adalah %g", panjang, derajat, hasil);

    return 0;
}

float math(float derajat, float panjang)
{
    float radian;

    radian = derajat / 180.0f * PI;
    panjang = tan(radian) * panjang;
    return panjang;
}
