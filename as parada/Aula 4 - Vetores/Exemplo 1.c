#include <stdio.h>

int main()
{
    //Declarando uma variável float normal
    float numero;

    //Declarando uma variável float vetor, com 10 espaços
    float numeros[10];

    //Atribuindo um valor para a variável normal
    numero = 10;

    //Atribuindo um valor para cada espaço do vetor
    numeros[0] = 1;         
    numeros[1] = 2;
    numeros[2] = 3;         //Os espaços vão de 0 (o primeiro espaço)
    numeros[3] = 4;         //até 9 (o último elemento) conforme declarado,
    numeros[4] = 5;         //totalizando 10 espaços.
    numeros[5] = 6;         
    numeros[6] = 7;
    numeros[7] = 8;
    numeros[8] = 9;
    numeros[9] = 10;

    //Imprimindo os valores do vetor
    printf("Impressao dos Valores:\n%.2f ", numeros[0]);
    printf("%.2f ", numeros[1]);
    printf("%.2f ", numeros[2]);
    printf("%.2f ", numeros[3]);
    printf("%.2f ", numeros[4]);
    printf("%.2f ", numeros[5]);
    printf("%.2f ", numeros[6]);
    printf("%.2f ", numeros[7]);
    printf("%.2f ", numeros[8]);
    printf("%.2f\n", numeros[9]);

    //Imprimindo os valores do vetor no laço de repetição
    int i = 0;

    printf("\nImpressao dos Valores no laco de repeticao:\n");
    while(i <= 9)
    {
        printf("%.2f ", numeros[i]);
        i++;
    }

    //Atribuindo um valor para cada espaço do vetor usando laço de repetição
    i = 0;
    
    while(i <= 9)
    {
        numeros[i] += 10;
        i++;
    }

    //Imprimindo os novos valores
    i = 0;

    printf("\n\nNovos Valores:\n");
    while(i <= 9)
    {
        printf("%.2f ", numeros[i]);
        i++;
    }

    return 0;
}