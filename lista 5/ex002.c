// Faça um programa que tenha uma função que receba dois números inteiros retorne o menor número

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d\n", num2);
    } else if (num2 > num1) {
        printf("%d\n", num1);
    } else {
        printf("Os numeros são iguais!\n");
    }
}