#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

float radian(float);

float radian(float n)
{
    float rad;

    rad = n / 180.0f * PI;
    return rad;
}

int main()
{
    float derajat, hasil;
    
    puts("#------Konversi derajat ke radian------#");
    scanf("%f", &derajat);
    hasil = radian(derajat);
    printf("%g derajat = %g rad", derajat, hasil);

    return 0;
}