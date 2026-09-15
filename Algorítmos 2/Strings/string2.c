#include <stdio.h>

//  Nesse exemplo, scanearemos uma palavra e armazenaremos
//ela numa string.

int main()
{
    char nome[60];

    printf("Digite seu nome:\n");

    scanf("%s", &nome);

    printf("O nome digitado foi: %s", nome);

    return 0;
}

//  Perceba que, ao utilizar a barra de espaço,
//a string entende como se aquele fosse o final de sua 
//leitura.