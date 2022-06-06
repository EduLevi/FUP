/*
    8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
    OK.
*/
#include <stdio.h>

int main()
{
    float tempCelc, tempKelv;

    printf("Insira a temperatura em graus Kelvin: \n");
    scanf("%f", &tempKelv);

    tempCelc = tempKelv - 273.15;
    
    printf("A temperatura inserida convetida em graus Celsius e: %.2f", tempCelc);
    return 0;
}