/*
8) Faça um algoritmo para ler base e altura de um triângulo e informar a área.
*/

#include <stdio.h>

int main() {
    int base, altura;

    printf("Digite a base e a altura de um triângulo, respectivamente e separadamente: ");
    scanf("%d %d", &base, &altura);

    printf("A área do triângulo é: %d\n", (base*altura)/2 );
}