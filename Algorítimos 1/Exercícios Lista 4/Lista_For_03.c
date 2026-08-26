//Faça um algoritmo que leia cinco números inteiros (a, b, c, d e e)
//e mostre esses valores em ordem crescente e em ordem decrescente.

#include <stdio.h>

int main(){

    int aux, a, b, c, d, e, cont;

    printf("Digite 5 numeros inteiros respectivamente: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    for(cont = 0; cont != 5; cont++)
    {
        if(a >= b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        if(b >= c)
        {
            aux = b;
            b = c;
            c = aux;
        }
        if(c >= d)
        {
            aux = c;
            c = d;
            d = aux;
        }
        if(d >= e)
        {
            aux = d;
            d = e;
            e = aux;
        }
    }
    printf("Ordem crescente: %d <= %d <= %d <= %d <= %d.\nOrdem decrescente: %d >= %d >= %d >= %d >= %d", a, b, c, d, e, e, d, c, b, a);

    return 0;
}