#include <stdio.h>

int main()
{
  int menu, fatorial, fibonacci, somatorio, produtorio, PA, PG;
  int n, n2, i, termo, t1, t2, r;

  do
  {
    printf("Selecione:\n1- Fatorial\n2- Sequencia de Fibonacci\n3- Somatorio\n4- Produtorio\n5- P.A.\n6- P.G.\n0 - Parar\n");
    scanf("%d", &menu);

    switch(menu)
    {
      //Fatorial
      case 1:
      {
        printf("\n--Fatorial--\nDigite um numero:\n");
        scanf("%d", &n);
      
        n2 = n;
        fatorial = 1; // BASE

        while(n2 != 1)
        {
         fatorial *= n2; // PASSO DA INDUCAO
          n2 -= 1;
        }

        printf("\n%d fatorial e igual a: %d\n\n", n, fatorial);
        break;
      }

      //Fibonacci
      case 2:
      {
        printf("\n--Sequencia de Fibonacci--\nDigite um numero:\n");
        scanf("%d", &termo);

        t1 = 0;
        t2 = 1;
        i = 3;
        fibonacci = 0; // BASE

        if(n == 1)
        {
          printf("\nO %do termo da Sequencia de Fibonacci e igual a: %d\n\n", termo, t1);
          break;
        }
        if(n == 2)
        {
          printf("\nO %do termo da Sequencia de Fibonacci e igual a: %d\n\n", termo, t2);
          break;
        }

        while(i <= termo)
        {
          fibonacci = t1 + t2; // PASSO DA INDUCAO
          t1 = t2;
          t2 = fibonacci;
          i++;
        }

        printf("\nO %do termo da Sequencia de Fibonacci e igual a: %d\n\n", termo, fibonacci);
        break;
      }

      //Somatório
      case 3:
      {
        printf("\n--Somatorio--\nDigite um numero:\n");
        scanf("%d", &n);

        n2 = n;
        i = 1;
        somatorio = 0; // BASE

        while(i <= n2)
        {
          somatorio += i; // PASSO DA INDUCAO
          i++;
        }

        printf("\nA soma dos %d primeiros termos e igual a: %d\n\n", n, somatorio);
        break;
      }

      //Produtório
      case 4:
      {
        printf("\n--Produtorio--\nDigite um numero:\n");
        scanf("%d", &n);

        n2 = n;
        i = 1;
        produtorio = 1; // BASE

        while(i <= n2)
        {
          produtorio *= i; // PASSO DA INDUCAO
          i++;
        }

        printf("\nO produto dos %d primeiros numeros e igual a: %d\n\n", n, produtorio);
        break;
      }

      //Progressão Aritimética
      case 5:
      {
        printf("\n--Progressao Aritimetica--\nDigite a razao:\n");
        scanf("%d", &r);
        printf("\nDigite o primeiro termo da P.A.:\n");
        scanf("%d", &t1);
        printf("\nAgora digite o termo a ser encontrado:\n");
        scanf("%d", &termo);

        i = 1;
        PA = t1; // BASE

        while(i < termo)
        {
          PA += r; // PASSO DA INDUCAO
          i++;
        }

        printf("\nO %do termo dessa P.A. de razao %d e igual a: %d\n\n", termo, r, PA);
        break;
      }

      //Progressão Geométrica
      case 6:
      {
        printf("\n--Progressao Geometrica--\nDigite a razao:\n");
        scanf("%d", &r);
        printf("\nDigite o primeiro termo da P.G.:\n");
        scanf("%d", &t1);
        printf("\nAgora digite o termo a ser encontrado:\n");
        scanf("%d", &termo);

        i = 1;
        PG = t1; // BASE

        while(i < termo)
        {
          PG *= r; // PASSO DA INDUCAO
          i++;
        }

        printf("\nO %do termo dessa P.G. de razao %d e igual a: %d\n\n", termo, r, PG);
        break;
      }

      //Saída
      case 0:
      {
        break;
      }

      //Mensagem de erro:
      default:
      {
        printf("\nDigite uma opcao valida!\n\n");
        break;
      }
    }
  }
  while(menu != 0);

  return 0;
}