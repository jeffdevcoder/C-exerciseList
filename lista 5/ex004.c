// Escreva um programa que leia 5 números inteiros positivos (verifique se este número é maior que zero). Para cada número informado escrever a soma de seus divisores (exceto ele mesmo). Utilize a função SomaDivisores para obter a soma

// Nome: SomaDivisores. Descrição: Calcula a soma dos divisores do número informado (exceto ele mesmo).Entrada: Um número inteiro e positivo. Saída: A soma dos divisores. Exemplo: Para o valor 8: 1+2+4 = 7

#include <stdio.h>

int main() {
    int array[100], num, soma=0;

    for (int i = 0; i<5; i++) {
        do {
            printf("Digite um numero inteiro positivo: ");
            scanf("%d", &num);

            if (num <= 0) {
                printf("Numero invalido! Digite um numero maior que zero.\n");
            }
        } while (num <= 0);

        printf("Divisores de %d: ", num);

        for (int j=2; j<num; j++) {
            if (num % j == 0) {
                printf("%d ", j);
                soma += j;
            }
        }

        printf("\nA soma dos divisores de %d é: %d\n", num, soma);

        soma = 0;
    }

}