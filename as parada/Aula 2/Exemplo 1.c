#include <stdio.h>

int main (){

    float media = 7.0;

    // a ordem da lógica faz diferença
    
    if (media >= 6.0) {
        printf("Aprovado!");
    } else if (media >= 4){
        printf("Recuperacao!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}