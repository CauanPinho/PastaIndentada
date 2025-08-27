#include <stdio.h>

int main() {
    int anoNasc, anoAtual, idade, idade2028;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;
    idade2028 = 2028 - anoNasc;

    printf("A idade atual da pessoa e: %d anos\n", idade);
    printf("Em 2028 a pessoa tera: %d anos\n", idade2028);

    return 0;
}

