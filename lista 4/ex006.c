// Faça um programa que receba um número e retorne este número invertido. Ex: 321 → 123.

#include <stdio.h>

int inverteNumero(int num, int array[]) {
    int i = 0;

    while (num != 0) {
        int ultimoDigito = num % 10;
        array[i++] = ultimoDigito;
        num = num / 10;
    }

    return i;
}

int main() {
    int num, array[100], tamanho;

    printf("Digite um numero: ");
    scanf("%d", &num);

    tamanho = inverteNumero(num, array);

    for (int i = 0; i < tamanho; i++) {
        printf("%d", array[i]);
    }

    printf("\n");

    return 0;
}
