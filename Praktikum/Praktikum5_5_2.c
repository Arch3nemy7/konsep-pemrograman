#include <stdio.h>
#include <stdlib.h>

float f_to_i(float);
float i_to_cm(float);
float c_to_m(float);

int main()
{
    float kaki, inci, centi, meter;

    puts("#------Konversi feet ke inci, centimeter, dan meter------#");
    printf("Masukkan panjang dalam satuan feet : ");
    scanf("%f", &kaki);
    inci = f_to_i(kaki);
    centi = i_to_cm(inci);
    meter = c_to_m(centi);

    printf("%g kaki = %g inci\n", kaki, inci);
    printf("%g inci = %g centimeter\n", inci, centi);
    printf("%g centimeter = %g meter\n", centi, meter);

    return 0;
}

float f_to_i(float kaki)
{
    float inci;

    inci = kaki * 12;

    return inci;
}

float i_to_cm(float inci)
{
    float centi;

    centi = inci * 2.54;

    return centi;
}

float c_to_m(float centi)
{
    float meter;

    meter = centi / 100;

    return meter;
}
