//Faça um algoritmo que leia um número inteiro p (p > 1) e verifique se ele é primo ou não,
//mostrando o resultado ao final.

#include <stdio.h>

int main(){

    int n, divisores = 0, n2 = 1;

    printf("Digite um numero qualquer:\n");
    scanf("%d", &n);

    while(n2 <= n)
    {
        if(n % n2 == 0)
        {
            divisores++;
        }
        n2++;
    }

    if(divisores == 2)
    {
        printf("Seu numero e primo!\n");
    }
    else
    {
        printf("Seu numero nao e primo!\n");
    }

    return 0;
}