/*
    5. Leia um número real e imprima a quinta parte deste número.
    OK.
*/
#include <stdio.h>

int main()
{
    float num, quintaPart;

    printf("Insira um numero real: \n");
    scanf("%f", &num);

    quintaPart = num * 1/5;

    printf("A quinta parte do numero inserido e: %.2f", quintaPart);
    return 0;
}