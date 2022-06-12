/*
    4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y
    quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a
    soma dos valores encontrados nas respectivas posições X e Y.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[8], x, y, i=0;
    for(i; i<8; i++)
    {
        scanf("%d", &v1[i]);
    }
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d", x, y, x+y);
    return 0;
}


