/*
4) Faça um algoritmo para ler um valor em quilogramas (Kg) e imprimir o equivalente
em gramas (g).
*/

#include <stdio.h>

int main() {
    float kg;

    printf("Digite o valor do peso em KG: ");
    scanf("%f", &kg);

    printf("O peso em gramas é: %.2fg\n", kg*1000);
}