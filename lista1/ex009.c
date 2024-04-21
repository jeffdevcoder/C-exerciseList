/*
9) Faça um algoritmo para ler um valor real e apresentar este valor com desconto de
10%.
*/

#include <stdio.h>

int main() {
    float valor;

    printf("Digite o preço de um produto: ");
    scanf("%f", &valor);

    printf("O valor com desconto é: %.2f\n", valor*0.9);
}