//Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos
//elementos de um vetor original.
//-Você deve criar dois ponteiros locais dentro da função: um inicio apontando
//para o primeiro elemento e um fim apontando para o último
//Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de
//lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis
//inteiras como índice.

#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho)
{
    int aux;
    int *p_i = vetor, *p_f = vetor;

    p_f += (tamanho - 1);

    while(p_i != p_f)
    {
        aux = *p_i;
        *p_i = *p_f;
        *p_f = aux;
        p_i++;
        p_f--;
    }

    return;
}

int main()
{
    int V[9], i = 0;

    for(i = 0; i < 9; i++)
    {
        V[i] = i + 1;
        printf("V[%d]: %d, end: %d\n", i, V[i], &V[i]);
    }

    inverte_vetor(V, 9);

    printf("Depois de chamar a funcao:\n");

    for(i = 0; i < 9; i++)
    {
        printf("V[%d]: %d, end: %d\n", i, V[i], &V[i]);
    }

    return 0;
}