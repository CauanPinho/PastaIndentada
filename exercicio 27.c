#include <stdio.h>

int main(void) {
    double a, b, c, d, e, f;
    double den, x, y;

    printf("Digite a, b, c, d, e, f: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    den = a*e - b*d;              // denominador (ae - bd)


    x = (c*e - b*f) / den;
    y = (a*f - c*d) / den;

    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    return 0;
}

