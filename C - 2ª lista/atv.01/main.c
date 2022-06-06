/*
    1. Faça um programa que leia um número e informe se ele é igual a zero.
    OK.
*/
#include <stdio.h>

int main()
{
    float n1;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    if(n1 == 0)
    {
        printf("O numero digitado e igual a zero.");
    }else
    {
        printf("O numero digitado e diferente de zero.");
    }

    return 0;
}
