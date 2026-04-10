//Faça um programa em C que some os 30 primeiros números ímpares,
//e imprima o resultado.

#include <stdio.h>

int main(){

    int n = 0, cont_impar = 0, soma = 0;

    while(cont_impar < 30)
    {
        if(n % 2 == 1)
        {
            cont_impar++;
            soma += n; //Adicionando "n" à "soma".
        }
        n++;
    }
    printf("%d\n", soma);

    return 0;
}