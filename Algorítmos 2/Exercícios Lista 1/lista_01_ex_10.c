//Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
//representará a operação que se deseja efetuar com os números. Assim, se o símbolo
//for “ + ” , deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma
//divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da
//operação para o programa principal.

#include <stdio.h>

void calculadora(float n, float n2, char op)
{
    float res;

    switch(op)
    {
        case '+':
        {
            res = (n + n2);
            break;
        }
        case '-':
        {
            res = (n - n2);
            break;
        }
        case '*':
        {
            res = (n * n2);
            break;
        }
        case '/':
        {
            res = (n / n2);
            break;
        }
        default:
        {
            printf("Digite uma opcao valida!");
            return;
        }
    }

    printf("Resultado: %.2f", res);

    return;
}

int main()
{
    float n, n2;
    char op;

    printf("==Digite a operacao desejada==\n'+' para adicao\n'-' para subtracao\n'*' para multiplicacao\n'/' para divisao\n");
    scanf("%c", &op);
    printf("Agora digite dois valores respectivamente (Ex: 6 7):\n");
    scanf("%f %f", &n, &n2);

    calculadora(n, n2, op);

    return 0;
}