//Aluno: Vinicius Irabe Messias

#include <stdio.h>
#include <string.h>

void recarregar(float *drone, float bateria)
{
    float *p;

    p = drone;

    *p += bateria;

    if(*p > 100)
    {
        *p = 100;
    }

    printf("\nBateria Recarregada!\n");
    
    return;
}

void voar(float *drone, int consumo)
{
    float *p;

    p = drone;

    if(*p - consumo < 0)
    {
        printf("\nBateria insuficiente!\n");

        return;
    }

    *p -= consumo;

    printf("\nVoo realizado com sucesso!\n");

    return;
}

void exibirStatusDrone(int registro, char *modelo, float bateria)
{
    printf("\nCodigo de registro: %d\nModelo: %s\nPercentual de bateria atual: %.2f\n\n", registro, modelo, bateria);

    return;
}

int main()
{
    struct drone 
    {
        int codigo_registro;
        char modelo[50];
        float bateria_percentual;
    };
    
    struct drone drone1;

    drone1.codigo_registro = 123;
    strcpy(drone1.modelo, "ae86");
    drone1.bateria_percentual = 100;

    int n = 1, *p;
    float bateria, consumo;

    p = &drone1.codigo_registro;

    while(n != 0)
    {
        printf("===PAINEL DO DRONE===\n1 - Iniciar Voo (Consumir Bateria)\n2 - Recarregar\n3 - Ver Status\n0 - Desligar Sistema\nEscolha uma opcao:\n");
        scanf("%d", &n);

        switch(n)
        {
            case 1:
            {
                printf("\nDigite o consumo de bateria planejado para o voo:\n");
                scanf("%f", &consumo);

                voar(&drone1.bateria_percentual, consumo);

                exibirStatusDrone(drone1.codigo_registro, drone1.modelo, drone1.bateria_percentual);

                break;
            }

            case 2:
            {
                printf("\nDigite a quantidade de bateria a ser carregada:\n");
                scanf("%f", &bateria);

                recarregar(&drone1.bateria_percentual, bateria);

                exibirStatusDrone(drone1.codigo_registro, drone1.modelo, drone1.bateria_percentual);

                break;
            }

            case 3:
            {
                exibirStatusDrone(drone1.codigo_registro, drone1.modelo, drone1.bateria_percentual);

                break;
            }

            case 0:
            {
                return 0;
            }

            default:
            {
                printf("\nPor favor, digite uma opcao valida!\n\n");
                break;
            }
        }
    }  

    return 0;
}