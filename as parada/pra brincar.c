#include <stdio.h>
int main(){

    float nota1, nota2;

    printf("\n Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\n Suas duas notas sao, respectivamente: %2.f e%2.f \n", nota1, nota2);
    return 0;
}