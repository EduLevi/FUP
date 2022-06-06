/*
    2. Faça um programa que leia um número e informe se ele é positivo.
    OK.
*/
#include <stdio.h>

int main()
{
    float n1;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    if(n1 > 0)
    {
        printf("O numero digitado e positivo.");
    }else if(n1 < 0)
    {
        printf("O numero digitado e negativo.");
    }else
    {
        printf("O numero digitado e neutro.");
    }

    return 0;
}
