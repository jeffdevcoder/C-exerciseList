/*
6) Faça um algoritmo para ler um valor correspondente a um lado de um quadrado e
mostrar a ÁREA.
*/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &valor);

    printf("A área do quadrado é: %d\nm", valor*valor);
}