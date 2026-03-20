//Faça um algoritmo que receba três notas, 
//calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Digite suas tres notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3)/3;

    printf("Sua media aritmetica e: %.2f \n", media);
    return 0;
}