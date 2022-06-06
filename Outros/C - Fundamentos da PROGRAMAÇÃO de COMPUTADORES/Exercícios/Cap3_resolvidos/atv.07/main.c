/*
    Q.07_ Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
    OK.
*/
#include <stdio.h>

int main()
{
    float sal, salreceber, imp;

    scanf("%f", &sal);

    imp = sal * 0.10;
    salreceber = sal + 50 - imp;

    printf("R$ %.2f", salreceber);

    return 0;
}
