/* 
8) Faça um programa que leia a base e o expoente. Depois calcule a Potência desse número.
Ex: Base = 3
Expoente = 3
3(3) = 3 x 3 x 3 x 3 = 81
*/

#include <stdio.h> 

int main() {
    int base, exp, total=1;

    printf("Escolha a base: ");
    scanf("%d", &base);

    printf("Escolha o expoente: ");
    scanf("%d", &exp);
    
    for (int i = 1; i <= exp; i++) {
        total = total * base;
    }

    printf("%d elevado a %d eh: %d\n", base, exp, total);
}