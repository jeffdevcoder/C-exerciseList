/*
11) Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um
algoritmo para ler o valor do pagamento e o preço do litro da gasolina, e exibir quantos
litros ele conseguiu colocar no tanque.
*/

#include <stdio.h>

int main() {
    float valorPagamento, precoGasolina;

    printf("Digite o valor do pagamento: ");
    scanf("%f", &valorPagamento);
    printf("Digite o preço do LITRO da gasolina: ");
    scanf("%f", &precoGasolina);

    printf("Seu tanque encheu %.2f litros de gasolina\n", valorPagamento/precoGasolina);
}