// Repare a seguinte característica do número 3025:  30 + 25 = 55  e 55^2=3025. Crie uma função que retornará 1 se o número tiver esta característica e 0 se não tiver esta característica. Faça um programa que leia uma série de valores (números inteiros de 4 algarismos, um de cada vez).  Para cada número lido, o programa deverá chamar a função e verificar se o número tem essa característica ou não. O programa termina quando for lido um valor menor que 1000 ou maior que 9999.  No final, mostre quantos números foram lidos no total e quantos possuem essa característica. Número lido: Num >=1000 && Num <=9999

#include <stdio.h>

int verificaCaracteristica(int num) {
    int parte1 = num / 100;
    int parte2 = num % 100;
    int soma = parte1 + parte2;
    int resultado = soma * soma;

    if (resultado == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    for (int i = 0; i<4; i++) {
        printf("Digite um numero de 4 algarismos (ex: 1111): ");
        scanf("%d", &num);

        if (num < 1000 || num > 9999) {
            printf("Digite um numero valido\n");
            continue;
        }

        if (verificaCaracteristica(num)) {
            printf("%d possui a característica.\n", num);
        } else {
            printf("%d não possui a característica.\n", num);
        }

    }
}