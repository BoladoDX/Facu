//Faça uma função que leia um número não determinado de valores positivos e retorna
//a média aritmética dos mesmos.

#include <stdio.h>

void media_aritmetica()
{
    int n = 1, qt = 0, soma = 0;
    float media;
    
    while(n != 0)
    {
        scanf("%d", &n);

        soma += n;

        if(n != 0)
        {
            qt++;
        }
    }

    media = soma / qt;

    printf("\nMedia aritmetica = %.2f", media);

    return;
}

int main()
{
    printf("Calcule a media aritmetica (digite 0 para parar de adicionar valores):\n");

    media_aritmetica();

    return 0;
}
