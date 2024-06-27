/*
3) Faça um algoritmo para ler três valores e imprimir a soma dos mesmos.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite 3 números (separadamente): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("A soma dos números é: %d\n", num1+num2+num3);
}