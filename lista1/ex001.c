/*
1) Faça um algoritmo para ler dois valores e imprimir a soma dos mesmos.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números respectivamente e separadamente: ");
    scanf("%d %d", &num1, &num2);


    printf("A soma dos dois número é: %d\n", num1+num2);
}