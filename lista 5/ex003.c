// Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float

#include <stdio.h>
#include <math.h>


int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite o x1: ");
    scanf("%f", &x1);
    
    printf("Digite o y1: ");
    scanf("%f", &y1);

    printf("Digite o x2: ");
    scanf("%f", &x2);

    printf("Digite o y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia = %.2f\n", distancia);

    return 0;
}
