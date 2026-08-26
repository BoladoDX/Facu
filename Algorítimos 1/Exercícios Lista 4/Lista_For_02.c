//Faça um algoritmo que leia um número inteiro n (n > 0) e calcule a expressão:
//R = (1 + 1×2 + 1×3 + 1×4 + ... + 1×n) / n. Ao final, mostre o resultado.

#include <stdio.h>

int main(){

    int n, cont, mult;
    float res, soma = 1;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if(n > 0)
    {
        for(cont = 2; cont <= n; cont++)
        {
        mult = (1 * cont);
        soma+= mult;
        }

        res = (soma/n);
        printf("Resultado: %.2f.\n", res);
    }

    else
    {
    printf("Erro, numero tem que ser maior que zero!\n");
    }

    return 0;
}