/*
    Q.03_ Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
    OK.
*/
#include <stdio.h>

int main()
{
    float nota1, peso1, nota2, peso2, nota3, peso3, media;

    scanf("%f", &nota1), scanf("%f", &nota2), scanf("%f", &nota3);

    scanf("%f", &peso1), scanf("%f", &peso2), scanf("%f", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("%f", media);
    
    return 0;
}
