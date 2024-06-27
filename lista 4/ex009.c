// Faça um programa que tenha uma função que receba dois números inteiros e retorne o resto da divisão entre estes números (não é para usar o operador %)

#include <stdio.h>

int calculaResto(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Divisor não pode ser 0");
        return -1;
    }

    int resto = dividendo;

    while (resto >= divisor) {
        resto = resto - divisor;
    }
    
    return resto;
}

int main() {
    int num1, num2;

    printf("Digite o dividendo: ");
    scanf("%d", &num1);
    printf("Digite o divisor: ");
    scanf("%d", &num2);

    int resto = calculaResto(num1, num2);

    if (resto != -1) {
        printf("Resto de %d/%d: %d\n", num1, num2, resto);
    }

    return 0;
}