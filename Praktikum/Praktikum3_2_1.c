#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;

    puts("#------Menentukan nilai diskriminan dan akar-akar dari suatu persamaan kuadrat------#");
    puts("ax^2 + bx + c = 0");
    printf("Masukkan nilai a : ");
    if (scanf("%f", &a) == 1){
        a = a;
    }
    else
        puts("Masukkan nilai a yang benar!");
        exit(EXIT_FAILURE);
    printf("Masukkan nilai b : ");
    if (scanf("%f", &b) == 1){
        b = b;
    }
    else
        puts("Masukkan nilai b yang benar!");
        exit(EXIT_FAILURE);
    printf("Masukkan nilai c : ");
    if (scanf("%f", &c) == 1){
        c = c;
    }
    else
        puts("Masukkan nilai c yang benar!");
        exit(EXIT_FAILURE);

    d = b * b - 4 * a * c;

    if (d > 0 ){
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx^2 + %gx + %g adalah\nD  : %g\nx1 : %g\nx2 : %g", a, b, c, d, x1, x2);
    } else if (d == 0){
        x1 = x2 = (-b / 2 * a);
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx^2 + %gx + %g adalah\nD  : %g\nx : %g.", a, b, c, d, x1);
    } else if (d < 0){
        x1 = (-b / 2 * a + (sqrt(-d) / 2 * a));
        x2 = (-b / 2 * a - (sqrt(-d) / 2 * a));
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx^2 + %gx + %g adalah\nD  : %g\nx1 : %gi\nx2 : %gi", a, b, c, d, x1, x2);
    }

    return 0;
}