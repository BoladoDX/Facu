#include <stdio.h>
int main(){

    // declarando variáveis
    int n1, n2, n3, n4, total;

    // entrada de dados
    printf("\n Digite 4 numeros (com espacamento):");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    //desse jeito também daria certo, mas com mais linhas de código (menor otimização):
    
    ///printf("\n Digite seu primeiro numero:");
    ///scanf("%d", &n1);
    ///printf("\n Digite seu segundo numero:");
    ///scanf("%d", &n2);
    ///printf("\n Digite seu terceiro numero:");
    ///scanf("%d", &n3);
    ///printf("\n Digite seu quato numero:");
    ///scanf("%d", &n4);

    // processamento dos dados
    total = n1 + n2 + n3 + n4;

    // daída dos dados
    printf("\n A soma e igual a: %d", total);
    return 0;
}