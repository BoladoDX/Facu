#include <stdio.h>

int main()
{
    int n, i;
    float dis, dis_maior = 0, dis_menor = 99999999999, dif;

    printf("Digite quantos saltos o atleta realizou:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Digite a distancia do %do salto em metros:\n", i);
        scanf("%f", &dis);

        if(dis >= dis_maior)
        {
            dis_maior = dis;
        }
        if(dis <= dis_menor)
        {
            dis_menor = dis;
        }
    }

    dif = (dis_maior - dis_menor);

    printf("\nMaior distancia saltada: %.2fm\nMenor distancia saltada: %.2fm\nDiferenca entre a maior e a menor: %.2fm", dis_maior, dis_menor, dif);

    return 0;
}