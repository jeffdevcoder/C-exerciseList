/*
13) O restaurante "Bom e Barato" cobra R$20,00 por quilo de comida, porém sua
balança só marca a pesagem em gramas. Faça um algoritmo para ler o valor pesado de
um cliente e informar o preço a pagar pelo prato.
*/

#include <stdio.h>

int main() {
    float valorGramas;

    printf("Digite o valor em gramas(g) da comida: ");
    scanf("%f", &valorGramas);

    printf("O preço a pagar pelo prato é: R$%.2f\n", (valorGramas/1000)*20);
}