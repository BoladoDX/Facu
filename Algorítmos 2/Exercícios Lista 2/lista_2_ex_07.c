//Elabore uma função que receba duas strings como parâmetros e verifique se a
//segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
//caracteres das strings.


#include <stdio.h>

int procurar_texto(char *palavra1, char *palavra2) 
{
    
    for (int i = 0; *palavra1 != '\0'; palavra1++) 
    {
        char *p1 = palavra1;
        char *p2 = palavra2;
      
        while (*p1 == *p2 && *p2 != '\0') 
        {
            p1++;
            p2++;
        }

        if (*p2 == '\0') 
        {
            return 1;
        }
    }

    return 0;
}

int main() 
{
    char string1[100];
    char string2[100];

    printf("Digite a primeira palavra:");
    scanf("%s", string1); 

    printf("Digite a segunda palavra:");
    scanf("%s", string2); 

    if (procurar_texto(string1, string2) == 1) 
    {
        printf("A Primeira String:  '%s' contem a Segunda String '%s'.\n", string1, string2);
    } 
    else 
    {
        printf("A Primeira String:  '%s' nao contem a Segunda String '%s'.\n", string1, string2);
    }

    return 0;
}