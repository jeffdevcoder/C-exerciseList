// Faça um programa que receba um número e imprima na tela a tabuada deste número

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
}