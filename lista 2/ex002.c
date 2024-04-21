/*
2) Faça um programa em C para ler o peso e a idade do usuário e mostrar qual o risco de
apresentar um problema cardíaco:
• peso maior que 110 kg e idade acima de 38 anos: ALTO RISCO
• peso menor que 110kg e idade acima de 38 anos: MÉDIO RISCO
• peso maior que 110kg e idade abaixo ou igual a 38 anos: BAIXO RISCO
• nenhuma das anteriores: BAIXíSSIMO RISCO.
*/

#include <stdio.h> 

int main() {
    float peso;
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (peso > 110 && idade > 38) 
        printf("ALTO RISCO\n");
    else if (peso < 110 && idade > 38)
        printf("MÉDIO RISCO\n");
    else if (peso > 110 && idade <= 38)
        printf("BAIXO RISCO\n");
    else 
        printf("BAIXISSIMO RISCO\n");
}