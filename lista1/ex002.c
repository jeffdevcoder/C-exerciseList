/*
2) Faça um algoritmo para ler dois valores e imprimir a multiplicação dos mesmos.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números respectivamente e separadamente: ");
    scanf("%d %d", &num1, &num2);

    printf("A multiplicação de ambos os números é: %d\n", num1*num2);
}