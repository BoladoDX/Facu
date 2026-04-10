//Faça um progama em C que imprima os 20 primeiros números naturais.

#include <stdio.h>

int main(){

    int n = 1;

    while(n <= 20)
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}