//Crie um programa que verifique se o alistamento é obrigatório.
//Critérios: Sexo Masculino ('M' ou 'm') e idade igual a 18 anos.
//Dica de Engenharia: Tente implementar utilizando o conceito de
//Cláusulas de Guarda (trate as condições de saída/erro primeiro).

#include <stdio.h>

int main(){

    int idade;
    char sexo;

    printf("Digite o seu sexo e idade respectivamente (Ex: M 18): \n");
    scanf("%c %d", &sexo, &idade);

    if(((sexo == 'M') || (sexo == 'm')) && (idade >= 18))
    {
        printf("\nAlistamento obrigatorio.");
    }
    else
    {
        printf("\nAlistamento nao obrigatorio");
    }

    return 0;
}