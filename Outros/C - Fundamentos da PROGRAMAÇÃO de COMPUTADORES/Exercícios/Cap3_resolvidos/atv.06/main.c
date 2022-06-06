/*
    Q.06_ Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
    OK.
*/
#include <stdio.h>

int main()
{
    float sal, grat, imp, salreceber;

    scanf("%f", &sal);

    grat = sal * 0.05;

    imp = sal * 0.07;

    salreceber = sal + grat - imp;

    printf("R$ %.2f", salreceber);

    return 0;
}
