//Para doar sangue, uma pessoa deve ter entre 18 e 69 anos e pesar no mínimo 50 kg.
//Escreva um programa que pergunte a idade e o peso e informe se o usuário está apto.
//Requisito: Utilize apenas um bloco if-else com operadores lógicos.

#include <stdio.h>

int main(){

    int peso, idade;

    printf("Digite o seu peso e sua idade respectivamente (Ex: 70 18):\n");
    scanf("%d %d", &peso, &idade);

    if((peso >= 50) && (idade >= 18) && (idade <= 69)) 
    {
        printf("\nApto para doar.");
    }
    else
    {
        printf("\nInapto para doar.");
    }
    
    return 0;
}