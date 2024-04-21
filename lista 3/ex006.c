/*
6. Faça um programa que leia o salário bruto dos 500 funcionários de uma empresa, calcule o imposto
retido e o salário liquido para cada um deles. Ao final do relatório o programa deverá imprimir os
totais de salário bruto, salário líquido e imposto retido.
O imposto retido deverá ser calculado de acordo com a seguinte tabela:

salário < 1000,00 0
1000,00  salário < 10000,00 10 %
10000,00  salário < 25000,00 15 %
salário  25000,00 20 %
*/

#include <stdio.h>

int main() {
    float sal;

    for (int i = 1; i<=5; i++){
        printf("Digite o salário do funcionario %d em REAIS: ", i);
        scanf("%f", &sal);
        if (sal < 1000) {
            printf("Sem impostos\n");
        } else if (sal >= 1000 && sal < 10000) {
            printf("SALARIO 2\n");
            printf("Salário bruto: R$%.2f\n", sal);
            printf("Salário líquido: R$%.2f\n", sal*0.90);
            printf("Imposto retido: R$%.2f\n", sal*0.10);
        } else if (sal >= 10000 && sal < 25000) {
            printf("SALARIO 3\n");
            printf("Salário bruto: R$%.2f\n", sal);
            printf("Salário líquido: R$%.2f\n", sal*0.85);
            printf("Imposto retido: R$%.2f\n", sal*0.15);
        } else if (sal >= 25000) {
            printf("SALARIO 4\n");
            printf("Salário bruto: R$%.2f\n", sal);
            printf("Salário líquido: R$%.2f\n", sal*0.80);
            printf("Imposto retido: R$%.2f\n", sal*0.20);
        }
    }
}