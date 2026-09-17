//Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
//estrutura lida.

#include <stdio.h>
#include <string.h>

int main()
{
    struct informacoes_pessoais //criado uma estrutura do tipo "informacoes_pessoais"
    {
        char nome[100];
        int idade;
        char endereco[100];
    }; 

    struct informacoes_pessoais pessoa1; //criado uma variavel do tipo "informacoes_pessoais"

    printf("Digite seu nome:\n");
    scanf("%s", &pessoa1.nome);
    printf("Digite sua idade:\n");
    scanf("%d", &pessoa1.idade);
    printf("Digite seu endereco:\n");
    scanf("%s", &pessoa1.endereco);

    printf("\n");

    printf("Seu nome: %s\nSua idade: %d\nSeu endereco: %s\n", pessoa1.nome, pessoa1.idade, pessoa1.endereco);

    return 0;
}