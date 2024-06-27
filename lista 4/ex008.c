// Faça um programa que obtenha um número digitado pelo usuário e repita a operação de multiplicar ele por 3 (imprimindo o novo valor), até que ele seja maior do que 100. Exemplo: Se o usuário digitar 5, deveremos observar na tela a seguinte sequência: 5   15  45  135

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num <= 100) {
        printf("%d x 3 = ", num);
        num = num * 3;
        printf("%d\n", num);
    }
}