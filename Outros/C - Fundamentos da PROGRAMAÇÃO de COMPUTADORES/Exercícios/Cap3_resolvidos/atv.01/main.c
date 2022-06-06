/*
    Q.01_ Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
    OK.
*/
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, soma;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("%d", soma);

    return 0;
}
