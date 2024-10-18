#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;

    puts("ax^2 + bx + c = 0");
    printf("Masukkan nilai a, b, dan c dengan format a, b, c : ");
    scanf("%f, %f, %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0 ){
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx2 + %gx + %g adalah\nD  : %g,\nx1 : %g,\nx2 : %g", a, b, c, d, x1, x2);
    } else if (d == 0){
        x1 = x2 = (-b / 2 * a);
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx2 + %gx + %g adalah\nD  : %g,\nx : %g.", a, b, c, d, x1);
    } else if (d < 0){
        x1 = (-b / 2 * a + (sqrt(-d) / 2 * a));
        x2 = (-b / 2 * a - (sqrt(-d) / 2 * a));
        printf("Nilai diskriminan dan akar-akar dari persamaan %gx2 + %gx + %g adalah\nD  : %g,\nx1 : %g,\nx2 : %g", a, b, c, d, x1, x2);
    }

    return 0;
}