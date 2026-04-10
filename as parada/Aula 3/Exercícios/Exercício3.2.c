//Exercício 3 resolução alternativa.

#include <stdio.h>

int main(){

    int n = 1, cont_par = 0;

    while(cont_par < 50)
    {
        if(n % 2 == 0)
        {
            cont_par++;
            printf("%d: %d\n", cont_par, n);
        }
    n++;
    }

    return 0;
}