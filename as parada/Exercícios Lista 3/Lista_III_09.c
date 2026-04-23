//Faça um algoritmo que encontre e mostre
//todos os pares de primos gêmeos no intervalo de 3 até 1000.
//Dois números primos são chamados de primos gêmeos quando
//a diferença entre eles é igual a 2.
//Exemplos: (3, 5), (5, 7), (11, 13).

#include <stdio.h>

int main(){

    int n = 3, divisores = 0, divisores2 = 0, n2 = 1, aux1 = 10000, aux2 = 1, n3 = 0;

    while(n != 1000)
    {
        while(n2 <= n)
        {
            if(n % n2 == 0)
            {
                divisores++;
            }
            n2++;
        }
        n2 = 1;
        n3 = (n + 2);
        while(n2 <= n3)
        {
            if(n3 % n2 == 0)
            {
                divisores2++;
            }
            n2++;
        }
        if((divisores == 2)&&(divisores2 == 2))
        {
            printf("%d e %d, ", n, n3);
        }
        n2 = 1;
        divisores = 0;
        divisores2 = 0;
        n++;
    }
    return 0;
}