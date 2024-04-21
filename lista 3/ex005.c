/*
5. Faça um programa que leia um intervalo do teclado (início e fim) e imprima os números pares entre
início e fim e seu somatório. Exemplo:
valores lidos: 3 15
impressão: 4 6 8 10 12 14
soma = 54
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros respectivamente e separadamente: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) 
        printf("O primeiro numero precisa ser menor que o segundo.\n");
    else 
        if (num1 % 2 == 0) 
            for (int i = (num1+2); i<num2; i+=2) {
                printf("%d ", i);
            }
        else 
            for (int i = (num1+1); i<num2; i+=2) {
                printf("%d ", i);
            }
        
}