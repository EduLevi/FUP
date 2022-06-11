/*
    3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
    componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10
    elementos cada. Imprimir todos os conjuntos.
    OK.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10], v2[10], i=0;
    for (i; i<10; i++)
    {
        scanf("%d", &v1[i]);
    }
    i=0;
    for(i; i<10; i++)
    {
        printf("\n%d", v1[i]);
    }
    i=0;
    for(i; i<10; i++)
    {
        v2[i] = v1[i] * v1[i];
        printf("\n%d", v2[i]);
    }
    
    return 0;
}
