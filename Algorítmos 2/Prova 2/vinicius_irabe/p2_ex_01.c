//Aluno: Vinicius Irabe Messias
#include <stdio.h>

struct Telemetria
{
	int modulo;
	float tensao;
	float corrente;
};

int main()
{
	FILE *fp, *fp_temp;
	char texto[250];
	struct Telemetria tele1;
	float potencia, potencia_media = 0, potencia_maior = 0;
	int total_leituras = 0, total_anomalias = 0, modulo_p_maior;
	int i = 0;

	fp = fopen("telemetria.txt", "r");

	if(fp == NULL)
	{
		printf("Falha em abrir arquivo! (1)\n");
		return 1;
	}

	fp_temp = fopen("anomalias.txt", "w");
	
	if(fp_temp == NULL)
	{
		printf("Falha em abrir arquivo! (2)\n");
		return 1;
	}

	fprintf(fp_temp, "ANOMALIA - Modulo[id]: V=[tensao]V | I=[corrente]A | P=[potencia]W\n");

	while(fgets(texto, sizeof(texto), fp) != NULL)
	{
		if(sscanf(texto, "%d %f %f", &tele1.modulo, &tele1.tensao, &tele1.corrente) == 3)
		{
			total_leituras++;
			
			potencia = tele1.tensao * tele1.corrente;

			potencia_media += potencia;

			i++;

			if(potencia >= potencia_maior)
			{
				potencia_maior = potencia;
				modulo_p_maior = tele1.modulo;
			}
			
			if((potencia > 50) || (tele1.tensao < 11))
			{
				fprintf(fp_temp, "ANOMALIA - Modulo %d: V= %.1fV | I= %.1fA | P= %.2fW\n", tele1.modulo, tele1.tensao, tele1.corrente, potencia);
				total_anomalias++;
			}
		}
	}

	potencia_media /= i;

	fprintf(fp_temp, "Total de leituras processadas: %d\nTotal de anomalias: %d\n", total_leituras, total_anomalias);
	fprintf(fp_temp, "Potencia media geral: %.2fW\nPico de potencia: %.2fW (Modulo [%d])\n", potencia_media, potencia_maior, modulo_p_maior);

	fclose(fp);
	fclose(fp_temp);

	printf("Relatorio de anomalias criado em 'anomalias.txt'.\n");

	return 0;			
}
