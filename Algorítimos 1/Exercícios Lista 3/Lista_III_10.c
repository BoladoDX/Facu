//Faça um algoritmo que encontre e mostre todos os
//números primos no intervalo de 2 até 20.000.

#include <stdio.h>

int main(){

    int n = 2, n2 = 1, n_primo = 0, divisores = 0;

    while(n != 20000)
    {
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
            printf("%d ", n);
            n_primo++;
        }
        divisores = 0;
        n2 = 1;
        n++;
    }
    printf("\nQuantidade de primos: %d", n_primo);

    return 0;
}