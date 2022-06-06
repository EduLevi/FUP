/*
    3. Faça um programa que receba dois números e mostre qual deles é o maior.
    OK.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Insira dois valores.\n");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
    {
        printf("%d e maior que %d", num2, num1);

    }
    else if (num1 > num2)
    {
        printf("%d e maior que %d", num1, num2);
    }
    else 
    {
        printf("%d e %d sao iguais.", num1, num2);
    }

    return 0;
}
