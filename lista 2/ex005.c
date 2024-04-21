/*
5) Tendo como entrada a altura e o sexo (codificado da seguinte forma: “f”:feminino e
“m”:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso
ideal, utilizando as seguintes fórmulas:
– para homens : (72.7 * h) – 58
– para mulheres : (62.1 * h) – 44.7
Onde h é a altura digitada.
*/

#include <stdio.h>

int main() {
    float altura;
    char sexo;

    printf("Qual seu sexo? 'm' para masculinho e 'f' para feminino: ");
    sexo = getchar();
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'm')
        printf("Seu peso ideal é: %.2f\n", (72.7 * altura) - 58);
    else if (sexo == 'f')
        printf("Seu peso ideal é: %.2f\n", (62.1 * altura) - 44.7);
    else 
        printf("Sexo invalido\n");
}