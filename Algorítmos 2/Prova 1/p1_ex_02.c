//Aluno: Vinicius Irabe Messias

#include <stdio.h>
#include <string.h>

void exibirLeitura(int a, char *b, float c)
{
    printf("ID: %d\nLocalizacao: %s\nTemperatura: %.1f (graus)C\n", a, b, c);

    return;
}

int main()
{
    struct sensor 
    {
        int id_sensor;
        char localizacao[50];
        float temperatura_atual;
    };

    struct sensor sensor1;

    sensor1.id_sensor = 123456;
    strcpy(sensor1.localizacao, "Av. Antonio Trajano 335");
    sensor1.temperatura_atual = 39.7;

    exibirLeitura(sensor1.id_sensor, sensor1.localizacao, sensor1.temperatura_atual);

    return 0;
}