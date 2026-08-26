//Faça uma função que recebe por parâmetro o raio de uma esfera e calcule o seu
//volume (v = 4/3.P .R3).

#include <stdio.h>

float volume(float raio)
{
    float resultado;

    raio = (raio * raio) * raio;

    resultado = (4 * (3.14159 * raio)) / 3;

    return resultado;
}

int main()
{
    float r, resultado;

    printf("Digite o raio de uma esfera: \n");

    scanf("%f", &r);

    resultado = volume(r);

    printf("O volume da esfera eh: %.2f", resultado);

    return 0;
}