/*
    9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na
    ordem inversa.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[6], i=0;
    for(i; i<6; i++)
    {
        scanf("%d", &v1[i]);
        while(v1[i]%2 != 0)
        {
            scanf("%d", &v1[i]);
        }
    }
    i = 5;
    for (i; i>=0; i--)
    {
        printf("\n%d", v1[i]);
    }
    
    return 0;
}

