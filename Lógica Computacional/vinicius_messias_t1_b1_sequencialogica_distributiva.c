#include <stdio.h>
#include <stdlib.h>

int main()
  {

  int a, b, c;

  printf("Digite os valores de tres lados respectivamente (Ex: 2 3 1): \n");
  scanf("%d %d %d", &a, &b, &c);

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
  //Mensagem de erro.
  else
    {
    printf("Seus valores nao cumprem com a condicao de existencia de um triangulo.\n");
    }

  return 0;
  }