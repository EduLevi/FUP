/*
    6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
    OK.
*/
#include <stdio.h>

int main()
{
    float tempCelc, tempFahr;

    printf("Insira a temperatura em graus Celsius: \n");
    scanf("%f", &tempCelc);

    tempFahr = tempCelc * (9.0/5.0)+32.0;
    
    printf("A temperatura inserida convetida em graus Fahrenheit e: %.2f", tempFahr);
    return 0;
}