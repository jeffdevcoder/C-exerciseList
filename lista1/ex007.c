/*
7) Faça um algoritmo para ler um valor em polegadas e escrever o equivalente em
centímetros. OBS:1 polegada = 2.54 centímetros.
*/

#include <stdio.h>

int main() {
    float polegadas;

    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegadas);

    printf("O valor em centímetros é: %.2f \n", polegadas*2.54);
}