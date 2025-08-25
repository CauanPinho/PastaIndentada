#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int x, i = 1;

    printf("Digite um numero e magicamente irei te dar a tabuada dele:\n");
    scanf("%d", &x);

    while (i <= 10) {
        printf("%d * %d = %d\n", x,i,(x*i));
        i++;

    }

    return 0;
}
