#include <stdio.h>

int main()
{
    int voto, i, B = 0, K = 0, Z = 0, Nulo = 0, Branco = 0;

    for(i = 0; i < 20; i++)
    {
        printf("Digite seu voto:\n1 - B\n2 - K\n3 - Z\n123 - Nulo\n0 - Branco\n");
        scanf("%d", &voto);

        switch(voto)
        {
            case 1:
            {
                B++;
                break;
            }
            case 2:
            {
                K++;
                break;
            }
            case 3:
            {
                Z++;
                break;
            }
            case 123:
            {
                Nulo++;
                break;
            }
            case 0:
            {
                Branco++;
                break;
            }
        }
    }
    printf("\nTotal de Votos:\nB = %d\nK = %d\nZ = %d\nNulo = %d\nBranco = %d\n", B, K, Z, Nulo, Branco);

    return 0;
}