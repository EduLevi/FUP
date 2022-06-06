/*
    7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0 (F - 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.
    OK.
*/
#include <stdio.h>

int main()
{
    float tempCelc, tempFahr;

    printf("Insira a temperatura em graus Fahrenheit: \n");
    scanf("%f", &tempFahr);

    tempCelc = 5.0 * (tempFahr - 32.0) / 9.0;
    
    printf("A temperatura inserida convetida em graus Celsius e: %.2f", tempCelc);
    return 0;
}