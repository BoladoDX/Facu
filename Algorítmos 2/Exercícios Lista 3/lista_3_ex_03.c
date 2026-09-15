//Uma matriz bidimensional em C é armazenada na memória como um vetor contínuo.
//-Declare uma matriz int matriz[3][3] e preencha-a com valores de 1 a 9.
//-Crie um ponteiro simples int *ptr = &matriz[0][0];
//-Utilizando apenas este ponteiro simples e aritmética de ponteiros (ou seja,
//proibido usar laços aninhados com índices [i][j]), percorra os 9 elementos na
//memória e calcule a soma apenas dos elementos da diagonal principal.
//Dica: A diagonal principal ocorre em saltos regulares de memória

#include <stdio.h>

int main()
{
    int M[3][3], i = 0, j = 0, x = 1, soma = 0;
    int *p = &M[0][0];

    printf("Valores da matriz:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            M[i][j] = x;
            x++;
            printf("M[%d][%d]: %d, end: %d\n", i, j, M[i][j], p);
            p++;
        }
    }

    p = &M[0][0];

    for(i = 0; i < 3; i++)
    {
        soma += *p;
        p += 4;
    }
    
    printf("\nSoma da diagonal principal (pela aritmetica de ponteiros): %d\n", soma);

    return 0;
}