/*
    Q.05_ Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
    OK.
*/
#include <stdio.h>

int main()
{
    float sal, perc, almento, novosal;

    scanf("%f", &sal);
    scanf("%f", &perc);

    almento = sal * perc / 100;

    printf("Aumento de %.0f porcento\n", almento);

    novosal = sal + almento;

    printf("R$ %5.2f", novosal);

    return 0;
}
