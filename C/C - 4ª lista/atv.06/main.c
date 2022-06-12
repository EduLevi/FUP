/*
    6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser
    impresso o maior e o menor elemento do vetor.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int v1[10], i=0, menor=INT_MAX, maior=INT_MIN;
    for (i; i<10; i++)
    {
        scanf("%d", &v1[i]);
        if(menor>v1[i]){
            menor = v1[i];
        }
        if(maior<v1[i]){
            maior = v1[i];
        }
    }
    printf("Menor: %d \nMaior: %d", menor, maior);
    
    return 0;
}
