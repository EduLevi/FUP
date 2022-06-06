/*
    4. Leia um número real e imprima o resultado do quadrado desse número.
    OK.
*/
#include <stdio.h>

int main()
{
    float num, quadr;

    printf("Insira um numero real: \n");
    scanf("%f", &num);

    quadr = num * num;
    
    printf("O quadrado do numero inserido e: %.2f", quadr);
    return 0;
}