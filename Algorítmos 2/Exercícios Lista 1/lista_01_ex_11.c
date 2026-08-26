//Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses
//valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
//qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário
//que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um
//triângulo é menor do que a soma do comprimento dos outros dois lados. O
//procedimento deve identificar o tipo de triângulo formado observando as seguintes
//definições:
//a. Triângulo Equilátero: os comprimentos dos 3 lados são iguais
//b. Triângulo Isósceles: os comprimentos de 2 lados são iguais
//c. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes

#include <stdio.h>
#include <stdlib.h>

//OBSERVAÇÃO: reutilizei o código do trabalho da matéria de Lógica Computacional do Hiroshi, já
//que se trata do mesmo objetivo.

void triangulo(int a, int b, int c)
{
    //Condição de existência de um triângulo.
    if(((a > abs(b - c)) && (a < (b + c))) || ((b > abs(a - c)) && (b < (a + c))) || ((c > abs(a - b)) && (c < (a + b))))
    {
      //Verificação do triângulo isóceles.
      if(((a == b) && (a != c)) || (((a == c) && (a != b))) || (((b == c) && (b != a))))
      {
      printf("Seu triangulo e isoceles!\n");
      }
      //Verificação do triângulo equilátero.
      if((a == b) && (b == c))
      {
      printf("Seu triangulo e equilatero!\n");
      }
      //Verificação do triângulo escaleno.
      if((a != b) && (a != c) && (b != a) && (b != c) && (c != a))
      {
        printf("Seu triangulo e escaleno!\n");
      }
    }
    else
    {
    printf("Seus valores nao cumprem com a condicao de existencia de um triangulo.\n");
    }

    return;
}
int main()
{
    int a, b, c;
    
    printf("Digite os lados do seu triangulo respectivamente (Ex: 6 7 9):\n");
    scanf("%d %d %d", &a, &b, &c);

    triangulo(a, b, c);

    return 0;
}