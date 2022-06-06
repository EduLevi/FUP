/*
    4. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
    OK.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float n1, raiz;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    if(n1 > 0)
    {
        raiz = sqrt(n1);
        printf("A raiz quadrada de %.2f e:\n%.2f", n1, raiz);
    }else
    {
        printf("O numero digitado e invalido.");
    }

    return 0;
}
