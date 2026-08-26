//Receba o preço de três modelos de microcontroladores (ou produtos quaisquer).
//O programa deve informar qual deve ser comprado, optando sempre pelo mais barato.
//Foco: Lógica de comparação entre três variáveis.

#include <stdio.h>

int main(){

    float p1, p2, p3;

    printf("Digite os precos dos produtos respectivamente (Ex: 10,00 20,00 30,00): \n");
    scanf("%f %f %f", &p1, &p2, &p3);

    if((p1 <= p2) && (p1 <= p3))
    {
        printf("O produto de custo R$%.2f deve ser comprado.\n", p1);
    }
    if((p2 <= p1) && (p2 <= p3))
    {
        printf("O produto de custo R$%.2f deve ser comprado.\n", p2);
    }
    if((p3 <= p1) && (p3 <= p2))
    {
        printf("O produto de custo R$%.2f deve ser comprado.\n", p3);
    }
    
    return 0;  
}