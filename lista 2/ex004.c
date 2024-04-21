/*
4) Maçãs custam R$ 0,30 se forem compradas menos que uma dúzia e R$0,25 se forem
compradas uma dúzia ou mais. Escreva um programa em pseudocódigo que leia o número
de maçãs compradas, calcule e escreva na tela o valor total da compra
*/

#include <stdio.h>

int main() {
    int macas;

    printf("Quantas macas voce comprou?: ");
    scanf("%d", &macas);

    if (macas < 12) 
        printf("Valor: R$%.2f\n", macas * 0.30);
    else 
        printf("Valor: R$%.2f\n", macas * 0.25);
}