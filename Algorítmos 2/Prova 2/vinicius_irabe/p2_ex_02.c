//Aluno: Vinicius Irabe Messias
#include <stdio.h>
#include <stdlib.h>

struct Tarefa
{
	int id;
	char nome[25];
	int tempo_ms;
};

void listar_tarefas(struct Tarefa *lista, int total)
{
	int i;

	for(i = 0; i < total; i++)
	{
		printf("\n==Tarefa %d==\n", i+1);
		printf("id = %d\n", lista[i].id);
		printf("nome = %s\n", lista[i].nome);
		printf("tempo = %dms\n", lista[i].tempo_ms);
	}

	return;
}

int main()
{
	struct Tarefa *p;
	int total = 0, controle = 4;
	int opcao, n = (4 * sizeof(struct Tarefa));
	int tempo_total = 0, id_maior_tempo = 0;

	p = calloc(4, sizeof(struct Tarefa));

	if(p == NULL)
	{
		printf("Falha em alocar memoria!\n");
		return 1;
	}

	while(1)
	{
		printf("\n==Gerenciador Dinamico de Tarefas de Microcontrolador==\n");
		printf("1 - Adicionar Tarefa\n2 - Listar Tarefas\n3 - Resumo\n4 - Sair\nDigite uma opcao:\n");
		scanf("%d", &opcao);

		switch(opcao)
		{
			case 1:
			{
				if(total == 4)
				{	
					n += (4 * sizeof(struct Tarefa));
					p = realloc(p, n); 
				}

				printf("Digite o id da tarefa:\n");
				scanf("%d", &p[total].id);
				printf("Digite o nome da tarefa:\n");
				scanf(" %24[^\n]", &p[total].nome);
				printf("Digite o tempo de execucao em ms:\n");
				scanf("%d", &p[total].tempo_ms);

				tempo_total += p[total].tempo_ms;
				
				if(p[total].tempo_ms >= id_maior_tempo)
				{
					id_maior_tempo = p[total].id;
				}

				total++;

				break;
			}

			case 2:
			{
				if(total == 0)
				{
					printf("Crie uma tarefa primeiro!\n");
					break;
				}

				listar_tarefas(p, total);

				break;
			}

			case 3:
			{
				printf("\n==Resumo==\nTempo total de execucao na fila: %dms\n", tempo_total);
				printf("id da tarefa de maior tempo de execucao: %d\n", id_maior_tempo);

				break;
			}

			case 4:
			{
				free(p);
				return 0;
			}

			default:
			{
				printf("Digite uma opcao valida!\n");
				break;
			}
		}
	}

}
