#include <stdio.h>

int main(void)
{
    int q1, q2, q3;
    double v1, v2, v3;

    printf("Digite: quantidade1 valor1 quantidade2 valor2 quantidade3 valor3:\n");
    if (scanf("%d %lf %d %lf %d %lf", &q1, &v1, &q2, &v2, &q3, &v3) != 6) {
        printf("Entrada invalida.\n");
        return 1;
    }

    double total = q1 * v1 + q2 * v2 + q3 * v3;

    printf("Total: R$ %.2f\n", total);
    return 0;
}
