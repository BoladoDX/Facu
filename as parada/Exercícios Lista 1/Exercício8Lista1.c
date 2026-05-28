//Faça um algoritmo que recebe um número real que representa o raio de um círculo.
//Calcule e mostre a área do círculo.
//A fórmula para calcular a área de uma circunferência é:
//area = π * raio2.
//Considerando para este problema que π = 3.14159:

#include <stdio.h>
#define PI 3.14159

int main(){

    float raio, area;

    printf("Digite o raio de su circulo: \n");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A area do seu ciculo e: %.2f \n", area);
    return 0;
}