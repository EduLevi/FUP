/*
    2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.
    OK.
*/
#include <stdio.h>

int main()
{
    int x = 1, y = 1, z = 1;

    for (x = 1; x <= 100; x++)
    {
        printf("Usando for: %d\n", x);
    }
    
    while (y <=100)
    {
        printf("Usando while: %d\n", y);
        y++;
    }
    
    do
    {
        printf("Usando do while: %d\n", z);
        z++;
    } while (z <= 100);
    

    return 0;
}


