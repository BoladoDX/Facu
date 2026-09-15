//Em C, funções retornam apenas um valor. Crie um programa que contorne isso
//usando ponteiros.
//-Implemente uma função chamada calcular_esfera que receba o raio de uma
//esfera e devolva sua área e seu volume.
//-Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
//-Na main, peça ao usuário o raio, chame a função e imprima os resultados.
//(Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³).

#include <stdio.h>

void calcular_esfera(float raio, float *area, float *volume)
{
    *area = ((4 * 3.14) * (raio * raio));
    *volume = (raio * raio * raio * 4 / 3 * 3.14);

    return;
}

int main()
{
    float r, a, v;

    printf("Digite o raio de uma esfera:\n");
    scanf("%f", &r);

    calcular_esfera(r, &a, &v);

    printf("Area da esfera: %f\nVolume da esfera: %f\n", a, v);

    return 0;
}