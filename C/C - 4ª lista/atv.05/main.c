/*
    5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10], p=0, i=0;
    for(i; i<10; i++){
        scanf("%d", &v1[i]);
        if(v1[i]%2 == 0){
            p++;
        }
    }
    printf("\n%d", p);

    return 0;
}
