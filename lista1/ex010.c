/*
10) Escreva um algoritmo para ler a idade de uma pessoa e exibir quantos dias de vida
ela possui. Considere sempre anos "cheios" e que um ano possui 365 dias.
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Você tem %d dias de vida\n", idade*365);
}