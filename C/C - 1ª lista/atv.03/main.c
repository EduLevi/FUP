/*
    3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
    OK.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, soma;

    printf("Insira tres numeros inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    soma = (num1 + num2 + num3);
    
    printf("A soma dos numeros inseridos e: %d", soma);
    return 0;
}
