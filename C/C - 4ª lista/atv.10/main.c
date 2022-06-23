/*
    10. Faça um programa para ler a nota da prova de 5 alunos e armazene num vetor, calcule e imprima
    a média geral.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v1[4], media, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        v1[i] = n;
        media += v1[i];
    }
    media = media/5;
    printf("\n%d", media);
    
    return 0;
}
