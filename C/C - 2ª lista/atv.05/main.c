/*
    5. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
    Quase OK.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, result;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    if(n1 > 0)
    {
        result = sqrt(n1);
        printf("A raiz quadrada de %.2f e:\n%.2f", n1, result);
    }else
    {
        result = n1 * n1;
        printf("O quadrado de %.2f e:\n%.2f", n1, result);
    }

    return 0;
}
