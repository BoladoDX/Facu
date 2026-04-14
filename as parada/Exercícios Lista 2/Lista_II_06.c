//Escreva um programa que leia três números inteiros e os exiba em ordem decrescente.
//Tente resolver realizando a troca de valores entre as variáveis
//(utilizando uma variável auxiliar) para que A≥B≥C ao final.

#include <stdio.h>

int main(){

    int n1, n2, n3, aux;

    printf("Digite tres numeros inteiros respectivamente (Ex: 23 12 99): \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 <= n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux; 
    }
    if(n1 <= n3)
    {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if(n2 <= n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    printf("Ordem decrescente: %d >= %d >= %d\n.", n1, n2, n3);
    return 0;
}