/* 
7) Faça um programa que calcule quantos litros de gasolina são usados em uma viagem, sabendo que um carro faz 10 Km/litro. O usuário fornecerá a velocidade do carro e o período de tempo que viaja nesta velocidade, para cada trecho do percurso. Então, usando as fórmulas (distância = tempo*velocidade) e (litros consumidos = distância / 10), o programa computará, para todos os valores não negativos de velocidade, os litros de combustível consumidos. O programa deverá imprimir a distância e o número de litros de combustível gastos naquele trecho. Deverá imprimir, também, o total de litros gastos na viagem. O programa pára quando for digitado um valor negativo de velocidade. 
*/

#include <stdio.h>

int main() {
    int vel;
    float tempo, litrosConsumidos, distancia;

    printf("Digite a velocidade do carro em KM/H: ");
    scanf("%d", &vel);

    if (vel < 0) {
        printf("A velocidade nao pode ser 0.\n");
        return 0;
    } 

    printf("Digite o tempo da viagem em HORAS: ");
    scanf("%f", &tempo);

    distancia = vel * tempo;

    litrosConsumidos = distancia / 10;

    printf("Combustivel gasto: %.2f\nDistancia percorrida: %.2f\n", litrosConsumidos, distancia);
}