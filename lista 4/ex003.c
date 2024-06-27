// Faça um programa que tenha uma função que verifica se um número é par ou ímpar. No programa principal, leia uma quantidade indeterminada de números e no final mostre a quantidade de números pares e a quantidade de números ímpares.  Use a função dentro do loop (while)

#include <stdio.h>

int parOuImpar(num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, par = 0, impar = 0;    

    while (par < 5 && impar < 5) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < 1) {
            printf("Digite um numero valido\n");
            continue;
        }

        int retorno = parOuImpar(num);

        if (retorno == 1) {
            printf("É par\n");
            par = par + 1;
        } else {
            printf("É impar\n");
            impar = impar + 1;
        }
    }

    printf("%d pares e %d impares\n", par, impar);
}