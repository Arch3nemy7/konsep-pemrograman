#include <stdio.h>

int main()
{
    float fahrenheit, celcius;

    printf("Masukkan nilai derajat celcius yang ingin dikonversi ke fahrenheit : ");
    scanf("%f", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Suhu %.2f derajat celsius dalam derajat fahrenheit adalah %g", celcius, fahrenheit);

    return 0;
}