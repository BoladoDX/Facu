#include <stdio.h>

int main()
{
    int i = 0, n = 1;
    float Km, cap, con;

    while(n != i)
    {
        printf("Digite a capacidade do tanque (litros):\n");
        scanf("%f", &cap);

        printf("Agora digite o consumo medio do veiculo (Km/L):\n");
        scanf("%f", &con);

        Km = (cap * con);

        printf("O carro percorre %.2fKm\n\nDigite 0 para parar ou 1 para continuar:\n", Km);
        scanf("%d", &n);
    }

    return 0;
}