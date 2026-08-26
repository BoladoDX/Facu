#include <stdio.h>

int main(){

        int i = 0, j = 0;

        while(i <= 10)
        {
            while(j <= 10)
            {
                printf("Iteracao i:%d j:%d\n", i, j);
                j++;
            }
            i++;
        }

        return 0;
}
//Você pode colocar qualquer comando dentro do "while".