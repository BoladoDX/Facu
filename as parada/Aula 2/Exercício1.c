// Faça um progama que receba dois números e moste o maior deles.

#include <stdio.h>

int main(){

    float n1, n2;

    printf("Digite dois numeros: \n");
    scanf("%f %f", &n1, &n2);

    if (n1 > n2) {
        printf("%.2f e maior que %.2f", n1, n2);
    } else if (n1 < n2) {
        printf("%.2f e maior que %.2f", n2, n1);
    } else {
        printf("%.2f e %.2f sao iguais", n1, n2);
    }

    return 0;
}