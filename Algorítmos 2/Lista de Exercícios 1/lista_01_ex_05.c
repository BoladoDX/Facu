//Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
//quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
//6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para
//verdadeiro e 0 caso contrário.

#include <stdio.h>

void verificador(int n)
{
    int n2 = 1, soma = 0, res;

    while(n2 < n)
    {
        if(n % n2 == 0)
        {
            soma+= n2;
        }

        n2++;
    }

    if(soma == n)
    {
        res = 1;
    }
    if(soma != n)
    {
        res = 0;
    }

    printf("%d", res);

    return;
}

int main()
{
    int numero;

    printf("==Verificador de Numeros Perfeitos==\n1 = perfeito\n0 = inperfeito\nDigite seu numero:\n");
    scanf("%d", &numero);

    printf("\n");
    verificador(numero);

    return 0;
}