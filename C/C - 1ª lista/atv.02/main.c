/*
    2. Faça um programa que leia um número real e o imprima.
    OK.
*/
#include <stdio.h>

int main()
{
    float num;

    printf("Insira um numero real: \n");
    scanf("%f", &num);

    printf("O numero inserido e: %.2f", num);
    return 0;
}
