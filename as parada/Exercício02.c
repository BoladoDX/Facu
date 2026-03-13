#include <stdio.h>
int main(){

    //declarar variáveis
    float n1, n2, n3, media;

    //entrada de dados
    printf("\nDigite suas 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    //processamento (tem que ser depois da entrada de dados)
    media = (n1 + n2 + n3) / 3;

    //saída de dados
    printf("Sua media e: %.2f\n", media);
    return 0;
}