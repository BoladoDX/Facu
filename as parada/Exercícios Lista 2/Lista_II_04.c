//Informe a classe eleitoral de uma pessoa de acordo com a idade:
//Menor que 16 anos: Não eleitor.
//Entre 18 e 64 anos: Eleitor obrigatório.
//Entre 16 e 17 anos ou maior/igual a 65 anos: Eleitor facultativo.
//Requisito: Utilize operadores lógicos para agrupar as faixas do eleitor facultativo em uma única linha de teste.

#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade < 16)
    {
        printf("Nao eleitor.\n");
    }
    if((idade >= 18) && (idade <= 64))
    {
        printf("Eleitor obrigatorio.\n");
    }
    if(((idade >= 16) && (idade <= 17)) || (idade >= 65))
    {
        printf("Eleitor facultativo.\n");
    }

    return 0;
}