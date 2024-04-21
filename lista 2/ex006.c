/*
6) Faça um programa que calcula a área de determinadas figuras geométricas. O programa
deverá apresentar um menu com as seguintes opções:
• 'q': quadrado
• 'r': retângulo
• 'c': círculo
• 't': trapézio
De acordo com a opção, o programa deve pedir os valores necessários para realizar o
cálculo.
*/

#include <stdio.h>

int main() {
    int base, altura, baseMaior;
    float raio;
    char figura;

    printf("Digite uma das opções abaixo para descobrir a área da figura.\n • 'q': quadrado\n • 'r': retângulo\n • 'c': círculo\n • 't': trapézio\nDigite: ");
    figura = getchar();

    if (figura == 'q') {
        printf("Digite a base do quadrado: ");
        scanf("%d", &base);

        printf("A área do quadrado é: %d\n", base*base);
    } else if (figura == 'r') {
        printf("Digite a base o retangulo: ");
        scanf("%d", &base);

        printf("Digite a altura do retangulo: ");
        scanf("%d", &altura);

        printf("A área do retangulo é: %d\n", base*altura);
    } else if (figura == 'c') {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);

        printf("A área do circulo é: %.2f\n", (3.14 * (raio*raio)) );
    } else if (figura == 't') {
        printf("Digite a base maior do trapézio: ");
        scanf("%d", &baseMaior);
        printf("Digite a base menor: ");
        scanf("%d", &base);
        printf("Digite a altura: ");
        scanf("%d", &altura);

        printf("A área do trapézio é: %d\n", ((base+baseMaior)*altura)/2);
    } else {
        printf("Figura inválida.\n");
    }
}