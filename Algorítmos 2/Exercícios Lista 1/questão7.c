#include <stdio.h>

int main()
{
    int i, n;
    float cloro;

    printf("Digite quantas medicoes deseja fazer:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Digite a medicao atual:\n");
        scanf("%f", &cloro);

        if(cloro < 1.0)
        {
            printf("Adicionar cloro\n");
        }
        if((cloro >= 1.0) && (cloro <= 3.0))
        {
            printf("Nivel ideal\n");
        }
        if(cloro > 3.0)
        {
            printf("Nao adicionar cloro\n");
        }
    }

    return 0;
}
