/*
4. Faça um programa que leia um número do teclado (num) e imprima os num primeiros números
pares. Exemplo:
valor lido: 6
impressão: 2 4 6 8 10 12
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i<=num*2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}