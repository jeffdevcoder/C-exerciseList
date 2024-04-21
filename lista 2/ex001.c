/*
1) Faça um programa em C para ler dois valores e mostrar “EM ORDEM” caso o primeiro seja
menor que o segundo e “FORA DE ORDEM” no caso contrário.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números separadamente: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) 
        printf("EM ORDEM\n");
    else 
        printf("FORA DE ORDEM\n");
}