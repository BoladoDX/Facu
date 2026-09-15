/*===REVISÃOZINHA DE STRING===*/

//  Strings são vetores de variáveis tipo char,
//ou seja, vetores de caracteres.
//  Elas servem para armazenar palavras, e até mesmo frases, 
//dependendo do seu tamanho.
//  O último elemento desse vetor necessita terminar com os
//caracteres "\0", que indica o final de uma string.

#include <stdio.h>

int main()
{
    int opcao;
    printf("Digite o exemplo:\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        /*===PRIMEIRO EXEMPLO===*/
        case 1:
        {
            //  Voce cria um vetor do tipo char
            char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
            //  Dessa maneira, voce entrega um caractere para cada espaço do vetor

            //  Se refira à sua string usando %s
            printf("%s", str);

            return 0;
        }

        /*===SEGUNDO EXEMPLO===*/
        case 2:
        {
            //  Para um jeito mais prático de se colocar caracteres dentro de uma string
            char str[] = {"hello\0"};

            printf("%s", str);

            return 0;
        }

        /*==TERCEIRO EXEMPLO===*/
        case 3:
        {
            //  Voce também pode criar um ponteiro de string e atribuir caracteres assim:
            char *str = "hello";
            //  Sem a necessidade do "\0", o ponteiro indica o final automaticamente
            
            printf("%s", str);

            return 0;
        }
    }

    return 0;
}