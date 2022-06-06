/*
    1. Faça um programa que mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
    OK.
*/
#include <stdio.h>

int main()
{
    int n=0, i;  

    for(i = 1; i<=5; i++)
    {
        n = n+3;

        printf("Multiplo de tres: %d\n", n);
    }

    return 0;
}
