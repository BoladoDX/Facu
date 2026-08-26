//Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu
//conceito, conforme a tabela abaixo:
// ==== NOTA ==== ==== CONCEITO ====
// de 0,0 a 4,9            D
// de 5,0 a 6,9            C
// de 7,0 a 8,9            B
// de 9,0 a 10,0           A

#include <stdio.h>

char conceito(float nota)
{
    char conceito;

    if((nota >= 0) && (nota <= 4.9))
    {
        conceito = 'D';
    }
    if((nota >= 5) && (nota <= 6.9))
    {
        conceito = 'C';
    }
    if((nota >= 7) && (nota <= 8.9))
    {
        conceito = 'B';
    }
    if((nota >= 9) && (nota <= 10))
    {
        conceito = 'A';
    }
    if((nota > 10) || (nota < 0))
    {
        conceito = 'I';
    }

    return conceito;
}

int main()
{
    float n;
    char resultado;

    printf("==Conceito==\nSaiba o seu conceito\n(obs: I = invalido)\nDigite sua nota:\n");
    scanf("%f", &n);

    resultado = conceito(n);

    printf("\nConceito: %c", resultado);

    return 0;
}
