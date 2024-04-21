/*
3) Escreva um programa que leia o código de origem de um produto e imprima na tela a
região de sua procedência conforme a tabela abaixo:
• código 1 : Sul
• código 2 : Sudeste
• código 3 : Centro-Oeste
• código 4 : Nordeste
• código 5: Norte
• Observação: Caso o código não seja nenhum dos especificados o produto deve ser
encarado como Importado.
*/

#include <stdio.h>

int main() {
    int cod;

    printf("Digite o código de origem do produto: ");
    scanf("%d", &cod);

    switch(cod) {
        case 1: 
            printf("Sul\n");
            break;
        case 2:
            printf("Sudeste\n");
            break;
        case 3:
            printf("Centro-Oeste\n");
            break;
        case 4:
            printf("Nordeste\n");
            break;
        case 5:
            printf("Norte\n");
            break;

        default: 
            printf("Importado\n");
            break;
    }

    return 0;
}