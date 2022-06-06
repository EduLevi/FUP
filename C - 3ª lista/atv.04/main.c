/*
    4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
    OK.
*/
#include <stdio.h>

int main(){
    int n1 = 0;

    for(n1; n1 <= 100000; n1 = n1 + 1000)
    {
        printf("%d\n", n1);
    }

    return 0;
}
