/*
    12. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o
    maior e o menor valor.
    NN.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[4], v = 0, vMaior = 0, vMenor = 0, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v);
        v1[i] = v;
    }
    for (i = 0; i < 5; i++)
    {
        if(v1[i] > vMaior)
        {
            vMaior = i;
            vMenor = i;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if(v1[i] < vMenor)
        {
            vMenor = i;
        }
    }
    printf("\nMaior valor: %d", vMaior);
    printf("\nMenor valor: %d", vMenor);
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", v1[i]);
    }
    
    return 0;
}
