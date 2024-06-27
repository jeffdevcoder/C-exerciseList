// Faça um programa que tenha uma função que receba três números inteiros e positivos(A, B e C). O retorno da função será a seguinte expressão: D = R+S/2 , onde R=(A + B)^2 e S=(B+C)^2

#include <stdio.h>

int criandoExpressoes(int A, int B, int C, int *R, int *S, int *D) {

    *R = (A+B)*(A+B);
    *S = (B+C)*(B+C);
    *D = (*R+*S)/2;
}

int main() {
    int A, B, C;
    int R, S, D;

    printf("Digite um numero A: ");
    scanf("%d", &A);

    printf("Digite um numero B: ");
    scanf("%d", &B);
    
    printf("Digite um numero C: ");
    scanf("%d", &C);

    int retorno = criandoExpressoes(A, B, C, &R, &S, &D);

    printf("R: %d\n S: %d\n D: %d\n", R, S, D);
}