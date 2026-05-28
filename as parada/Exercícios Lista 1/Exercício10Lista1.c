//Faça um algoritmo que calcule e mostre o volume de uma esfera
//sendo fornecido o valor de seu raio (R).
//A fórmula para calcular o volume é: (4/3) * π * R3. Considere π = 3.14159.

#include <stdio.h>
#define PI 3.14159

int main(){

    float raio, volume;

    printf("Digite o valor do raio da sua esfera: \n");
    scanf("%f", &raio);

    volume = ((4 * PI * (raio * raio * raio))/3);

    printf("O volume da sua esfera e: %.2f \n", volume);
    return 0;
}