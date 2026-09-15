//Elabore uma função que receba duas strings como parâmetros e verifique se a
//segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
//caracteres das strings.

#include <stdio.h>

int ocorre_string(char *string1, char *string2)
{
    int i = 0;


}

int main()
{
    int res;
    char str1[] = {"GENESIS\0"};
    char str2[] = {"GENES\0"};

    res = ocorre_string(str1, str2);

    if(res == 1)
    {
        printf("A segunda string ocorre na primeira!\n");
    }
    else
    {
        printf("A segunda string nao ocorre na primeira.\n");
    }

    return 0;
}