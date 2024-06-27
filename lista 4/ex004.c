// Faça um programa tenha uma função que verifique se um número é primo (2 divisores).Primos: 2,3,5,7,11,13,17,19,23

#include <stdio.h>

int numeroPrimo(num) {
    if (num <= 1) {
        return 0;
    } 

    for (int i = 2; i<num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int retorno = numeroPrimo(num);

    if (retorno == 1) {
        printf("É primo!\n");
    } else {
        printf("Não é primo!\n");
    }

}