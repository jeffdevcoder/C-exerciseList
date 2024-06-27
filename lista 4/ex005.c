// Faça um programa tenha uma função que verifique se um número é perfeito. Um número é perfeito quando a soma de seus divisores é igual a ele mesmo.  Ex: 6 = 1+2+3

#include <stdio.h>

int somaDosDivisores(num) {
    int soma = 0;

    for (int i = 1; i<num; i++) {
        if (num % i == 0) {
            soma = soma + i;
        }
    }

    if (soma == num) {
        return soma;
    } else {
        return 0;
    }

    
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int retorno = somaDosDivisores(num);

    if (retorno == num) {
        printf("É numero perfeito\n");
    } else {
        printf("Não é numero perfeito\n");
    }
}