//Faça um algoritmo que receba quatro números inteiros,
//calcule e mostre a soma desses números.

#include <stdio.h>

int main(){

int n1, n2, n3, n4, total;

printf("Digite quatro numeros: \n");
scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

total = n1 + n2 + n3 + n4;

printf("A soma e: %d \n", total);
return 0;

}