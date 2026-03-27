#include <stdio.h>

int main (){

    float nota1, nota2, media;

    printf("\nInsira duas notas (Ex: 3.5 7):");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    // a ordem da lógica faz diferença

    printf("\nMedia = %.2f.\n", media);
    
    if (media >= 6.0) {
        printf("\nAprovado!\n");
    } else if (media >= 4){
        printf("\nRecuperacao!\n");
    } else {
        printf("\nReprovado!\n");
    }
    

    return 0;
}