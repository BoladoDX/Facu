#include <stdio.h>

int main()
{
    int senha = 1897, resposta, tentativas = 0;

    while(tentativas < 3)
    {
        printf("Digite a senha:\n");
        scanf("%d", &resposta);

        if(resposta == senha)
        {
            printf("Acesso Concedido");
            
            return 0;
        }

        tentativas++;
    }

    printf("Conta Bloqueada: Procure o Suporte");

    return 0;
}