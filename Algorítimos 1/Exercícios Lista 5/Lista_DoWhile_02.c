//Faça um algoritmo que leia um número inteiro n (n > 0),
//correspondente à quantidade de pessoas cujas idades serão informadas.
//Em seguida, leia a idade das n pessoas e determine:
//a quantidade de pessoas maiores de idade (idade ≥ 18 anos);
//a média das idades das pessoas menores de idade.

#include <stdio.h>

int main()
{
    int n, n2, qt_menor = 0, qt_maior = 0, cont = 0, cont2 = 1, soma = 0;
    float media;

    printf("Digite quantas pessoas voce quer informar a idade:\n");
    scanf("%d", &n);

    do
    {
        printf("Digite a idade da %da pessoa:\n", cont2);
        scanf("%d", &n2);
        if(n2 >= 18)
        {
            qt_maior++;
        }
        else
        {
            soma += n2;
            qt_menor++;
        }
        cont2++;
        cont++;
    }
    while(cont != n);

    media = (soma / qt_menor);

    printf("Quantidade de pessoas maiores de idade: %d.\nMedia das idades dos menores de idade: %.2f.\n", qt_maior, media);

    return 0;
}