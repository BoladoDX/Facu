//Faça um pograma em C que imprima os números inteiros do intervalo
//de -13 a 25

#include <stdio.h>

int main() {

    float n = -13;

    while(n <= 25)
    {
        printf("%.0f\n", n);
        n++;
    }

    return 0;
}