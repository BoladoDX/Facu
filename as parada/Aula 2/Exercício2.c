// Faça um programa que receba um número e diga se ele é positivo ou negativo

#include <stdio.h>

int main(){

    float n;

    printf("Digite qualquer numero: \n");
    scanf("%f", &n);

    if (n > 0) {
        printf("%.2f e positivo.", n);
    } else if (n < 0) {
        printf("%.2f e negativo.", n);
    } else {
        printf("%.f e nulo.", n);
    }

    return 0;
}