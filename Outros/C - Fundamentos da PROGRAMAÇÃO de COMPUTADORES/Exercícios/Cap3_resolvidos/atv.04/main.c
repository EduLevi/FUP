/*
    Q.04_ Faça um programa que receba o salátio de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
    OK.
*/
#include <stdio.h>

int main()
{
    float sal, novosal;

    printf("Digite o valor do salário: \n");
    scanf("%f", &sal);

    novosal = sal * 1.25;

    printf("O novo saário será: R$ %5.2f", novosal);

    return 0;
}
