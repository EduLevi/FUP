/*
    2. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O
    programa deve executar os seguintes passos:
    a. Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    b. Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0],
    A[1] e A[5] do vetor e mostre na tela esta soma.
    c. Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    d. Mostre na tela cada valor do vetor A, um em cada linha.
    OK.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, n1;
    n1 = A[0] + A[1] + A[5];
    printf("\n%d", n1);
    A[4] = 100;
    int i = 0;
    for(i; i<6; i++)
    {
        printf("\n%d", A[i]);
    }
    return 0;
}
