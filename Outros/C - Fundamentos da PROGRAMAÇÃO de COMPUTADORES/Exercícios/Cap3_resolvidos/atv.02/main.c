/*
    Q.02_ Faça um programa que receba três notas, calcule e mostre a média aritimética.
    OK.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("%f", media);

    return 0;
}
