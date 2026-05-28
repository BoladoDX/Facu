//Faça um algoritmo que leia um número inteiro n (n > 0) e calcule a soma:
//S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n. Ao final, mostre o resultado.

#include <stdio.h>

int main(){

    int n, cont;
    float soma = 1, fracao;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if(n > 0)
    {
        for(cont = 2; cont <= n; cont++)
        {
        fracao = (1.0/cont);
        soma+= fracao;
        }

        printf("Resultado: %.2f.\n", soma);
    }

    else
    {
        printf("Erro, numero deve ser maior que 0!");
    }

    return 0;
}