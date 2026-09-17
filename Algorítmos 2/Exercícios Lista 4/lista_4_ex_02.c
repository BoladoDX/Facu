//Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
//esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma
//estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia
//uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
//desse retângulo.

#include <stdio.h>
#include <math.h>

struct ponto 
{
    int x;
    int y;
};

struct retangulo
{
    struct ponto ponto1;
    struct ponto ponto2;
};

int main()
{
    int area, perimetro;
    float comp_diag;

    struct retangulo retangulo1;

    printf("Digite as coordenadas (x, y) do ponto superior esquerdo do seu retangulo (Ex: 1 4):\n");
    scanf("%d %d", &retangulo1.ponto1.x, &retangulo1.ponto1.y);

    printf("Digite as coordenadas (x, y) do ponto inferior direito do seu retangulo (Ex: 5 2):\n");
    scanf("%d %d", &retangulo1.ponto2.x, &retangulo1.ponto2.y);

    area = (retangulo1.ponto2.x - retangulo1.ponto1.x) * (retangulo1.ponto1.y - retangulo1.ponto2.y);

    comp_diag = sqrt((pow((retangulo1.ponto2.x - retangulo1.ponto1.x), 2)) + (pow((retangulo1.ponto1.y - retangulo1.ponto2.y), 2)));

    perimetro = (2*(retangulo1.ponto2.x - retangulo1.ponto1.x)) + (2*(retangulo1.ponto1.y - retangulo1.ponto2.y));
    
    printf("\nArea do Retangulo: %d\nComprimento da diagonal: %.2f\nPerimetro do Retangulo: %d", area, comp_diag, perimetro);

    return 0;
}