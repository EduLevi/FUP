/*
    1. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[6], i=0;
    while(i<6)
    {
        scanf("%d", &v[i]);
        i++;
    }
    i=0;
    while(i<6)
    {
        printf("\n%d", v[i]);
        i++;
    }

    return 0;
}
