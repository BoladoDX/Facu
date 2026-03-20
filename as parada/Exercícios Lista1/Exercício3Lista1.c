//Faça um algoritmo que receba três notas e seus respectivos pesos,
//calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

int main(){

    float n1, n2, n3, p1, p2, p3, media;

    printf("Insira as tres suas notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Insira seus respectivos pesos: \n");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);

    printf("Sua media ponderada e: %.2f", media);
    return 0;
}