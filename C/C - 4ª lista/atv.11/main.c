/*
    11. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade
    de números negativos e a soma dos números positivos desse vetor.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1[9], soma, nega = 0, n;
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &n);
        v1[i] = n;
        if (v1[i] < 0)
        {
            nega ++;
        }else
        {
            soma += v1[i];
        }
    }
    printf("\nQuantia de numeros negativos no vetor: %.0f", nega);
    printf("\nSoma: %.2f", soma);
    
    return 0;
}
