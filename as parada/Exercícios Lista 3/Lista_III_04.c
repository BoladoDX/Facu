//Faça um algoritmo que leia um número inteiro n (n > 0), correspondente à quantidade de temperaturas que serão informadas.
//Em seguida, leia n valores inteiros, cada um representando a temperatura média diária de um determinado período.
//Ao final, calcule e mostre a média aritmética das temperaturas informadas.

#include <stdio.h>

int main(){

    int media, temp, soma = 0, n_de_temps = 1, cont = 0;

    printf("Digite quantas temperaturas serao informadas para a media: \n");
    scanf("%d", &n_de_temps);

    while(cont != n_de_temps)
    {
        printf("Digite uma temperatura: \n");
        scanf("%d", &temp);
        soma += temp;
        cont++;
    }

    media = soma / n_de_temps;
    printf("A media entre elas e: %d.\n", media);

    return 0;
}