//Faça um programa em C que some os números pares no intervalo de 0 a 100

#include <stdio.h>

int main(){

    int n = 0, soma = 0;

    while(n < 100)
    {
        if(n % 2 == 0)
        {
            soma += n; //Adicionando "n" à "soma".
        }
        n++;
    }
    printf("%d\n", soma);

    return 0;
}