//Faça um algoritmo que receba um número maior que zero, calcule e mostre:
//1- o número digitado ao quadrado;
//2- o número digitado ao cubo;
//3- a raiz quadrada do número digitado;
//4- a raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h> 

int main(){

    float n, n_quad, n_cubo, n_raizquad, n_raizcubi;

    printf("Digite um numero qualquer maior que 0: \n");
    scanf("%f", &n);

    n_quad = (n * n);
    n_cubo = (n * n * n);
    n_raizquad = (sqrt(n));
    n_raizcubi = (cbrt(n));

    printf("\nSeu numero ao quadrado: %.2f \nSeu numero ao cubo: %.2f \nA raiz quadrada do seu numero: %.2f \nA raiz cubica do seu numero: %.2f \n", n_quad, n_cubo, n_raizquad, n_raizcubi);
    return 0;
}