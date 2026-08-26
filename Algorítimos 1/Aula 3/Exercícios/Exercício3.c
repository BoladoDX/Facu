//Faça um programa em C que imprima os 50 primeiros números 
//naturais pares.

#include <stdio.h>

int main(){

    int n = 0;

    while(n <= 100)
    {
        if(n % 2 == 0)
        {
            printf("%d\n", n);
        }
    n++;
    }

    return 0;
}