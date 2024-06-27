// Faça um programa que tenha uma função que receberá um valor X (lido no programa principal) e retornará o cálculo de Y = X+2X+3X+4X+5X+...+20X


#include <stdio.h>

int multiplicaNumero(int num) {
    int soma = 0;

    for (int i = 1; i<=20; i++) {
        soma = soma + (num*i);
    }

    return soma;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int retorno = multiplicaNumero(num);
    printf("%d\n", retorno);
}

