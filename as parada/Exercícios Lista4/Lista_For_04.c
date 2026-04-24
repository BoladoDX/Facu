//Faça um algoritmo que leia 10 números inteiros. Para cada número lido, verifique se ele é maior que 25 e menor que 85.
//Ao final, mostre quais números estão dentro desse intervalo, quantos estão dentro e quantos estão fora.

#include <stdio.h>

int main(){

    int n, cont_dentro = 0, cont_fora = 0, cont = 0;

    printf("Digite 10 numeros inteiros: \n");
    
    for(cont = 0; cont != 10; cont++)
    {
        scanf("%d", &n);
        if((n > 25) && (n < 85))
        {   
            printf("%d esta dentro do intervalo.\n", n);
            cont_dentro++;
        }
        else
        {
            cont_fora++;
        }
    }

    printf("Quantidade de numeros dentro do intervalo: %d.\nQuantidade de numeros fora do intervalo: %d.\n", cont_dentro, cont_fora);

    return 0;
}