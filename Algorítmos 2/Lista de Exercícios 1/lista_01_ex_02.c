//Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
//da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.

#include <stdio.h>
#include <math.h>

int raiz1(int a, int b, int c)
{
    int delta, raiz1;

    delta = (b * b) + ((-4 * a) * c);

    delta = sqrt(delta);

    raiz1 = ((-1 * b) + delta) / (2 * a);

    return raiz1;
}

int raiz2(int a, int b, int c)
{
    int delta, raiz2;

    delta = (b * b) + ((-4 * a) * c);

    delta = sqrt(delta);

    raiz2 = ((-1 * b) - delta) / (2 * a);

    return raiz2;
}

int main()
{
    int a, b, c, x1, x2;

    printf("Digite os valores de A, B e C da sua equacao quadratica respectivamente (Ex: 1 2 6): \n");
    scanf("%d %d %d", &a, &b, &c);

    x1 = raiz1(a, b, c);
    x2 = raiz2(a, b, c);

    printf("As raizes sao: x1 = %d, x2 = %d", x1, x2);

    return 0;
}
