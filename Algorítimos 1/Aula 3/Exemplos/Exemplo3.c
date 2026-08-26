#include <stdio.h>

int main(){

    int opcao;

    printf("Digite uma opcao: \n1 - X-Tudo \n2 - X-Salada\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("X-Tudo\n");
            break;
        case 2:
            printf("X-Salada\n");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
//"Break" encerra a execução e sai do bloco.
//"Continue" encerra a execução daquele e comando e continua com as outras
//em seguida do bloco.