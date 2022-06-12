/*
    7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
    o maior elemento e a posição que ele se encontra.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int v1[10], maior=INT_MIN, pmaior, i=0;
    for (i; i<10; i++)
    {
        scanf("%d", &v1[i]);
        if(maior<v1[i]){
            maior = v1[i];
            pmaior = i;
        }
    }
    printf("\nPosicao de maior valor: v1[%d] \nMaior valor: %d", pmaior, maior);
    
    return 0;
}
