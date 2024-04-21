/*
3. Faça um programa que imprima os números pares no intervalo de 1 a 300.
*/

#include <stdio.h>

int main() {
    for (int i = 1; i<=300; i++) {
        if (i % 2 == 0) 
            printf("%d ", i);
    }
}