//Aluno: Vinicius Irabe Messias

#include <stdio.h>
#include <string.h>

int* buscarServidorMaisOcioso(int *servidor, int tamanho)
{
    int menor_carga = 9999, *p, *p2;

    p = servidor;
    p += 6;

    for(int i = 0; i < tamanho; i++)
    {
        if(*p <= menor_carga)
        {
            menor_carga = *p;
            p2 = p;
        }

        p += 8;
    }

    p2 -= 6;
    printf("==Servidor mais Ocioso==\nid: %d\ncarga: %d\n", *p2, menor_carga);

    return p2;
}

int main()
{
    struct servidor
    {
        int id_servidor;
        char ip_rede[20];
        int carga_processamento;
        int status_ativo;
    };

    struct servidor server[4];

    for(int i = 0; i < 4; i++)
    {
        server[i].id_servidor = i + 1001;
        server[i].status_ativo = 1;
    }
    strcpy(server[0].ip_rede, "ab8n11nk992b");
    strcpy(server[1].ip_rede, "bjb78b1bhg98");
    strcpy(server[2].ip_rede, "ch14b5hyy6n8");
    strcpy(server[3].ip_rede, "d12b4n53j76m");
    server[0].carga_processamento = 80;
    server[1].carga_processamento = 25;
    server[2].carga_processamento = 60;
    server[3].carga_processamento = 45;

    for(int i = 0; i < 4; i++)
    {
        printf("==Servidor %d==\nID: %d\nIP: %s\nCarga Atual: %d\nStatus: %d\n\n", i+1, server[i].id_servidor, server[i].ip_rede, server[i].carga_processamento, server[i].status_ativo);
    }

    int *p, recarga;

    p = buscarServidorMaisOcioso(&server[0].id_servidor, 4);

    printf("\nDigite a quantidade de carga a ser enviada ao servidor de ID: %d\n", *p);
    scanf("%d", &recarga);

    p += 6;
    *p += recarga;

    for(int i = 0; i < 4; i++)
    {
        printf("==Servidor %d==\nID: %d\nIP: %s\nCarga Atual: %d\nStatus: %d\n\n", i+1, server[i].id_servidor, server[i].ip_rede, server[i].carga_processamento, server[i].status_ativo);
    }

    return 0;
}