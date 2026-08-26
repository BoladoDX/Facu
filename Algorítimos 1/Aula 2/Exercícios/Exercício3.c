// Faça um programa que receba 3 números e diga qual é o maior.

#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("Digite tres numeros: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        printf("%.2f e maior que %.2f e %.2f", n1, n2, n3);
    } else if (n2 > n1 && n2 > n3) {
        printf("%.2f e maior que %.2f e %.2f", n2, n1, n3);
    } else if (n3 > n1 && n3 > n2) {
        printf("%.2f e maior que %.2f e %.2f", n3, n1, n2);
    } else {
        printf("%.2f, %.2f e %.2f sao iguais", n1, n2, n3);
    }

    return 0;
}