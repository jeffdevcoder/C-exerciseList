/*
12) Elabore um algoritmo para entrar com o dia e o mês de uma data e informar quantos
dias se passaram desde o início do ano. Esqueça a questão dos anos bissextos e
considere 1 mês=30 dias.
*/

#include <stdio.h>

int main() {
    int dia, mes, dataAtual;

    printf("Digite o dia do mês: ");
    scanf("%d", &dia);
    printf("Digite o número correspondente ao mês de hoje: ");
    scanf("%d", &mes);

    dataAtual = ((mes-1)*30) + dia;

    printf("Já se passaram %d dias desde o começo do ano\n", dataAtual);

}