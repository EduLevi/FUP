/*
    9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula deconversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
    OK.
*/
#include <stdio.h>

int main()
{
    float tempCelc, tempKelv;

    printf("Insira a temperatura em graus Celsius: \n");
    scanf("%f", &tempCelc);

    tempKelv = tempCelc + 273.15;
    
    printf("A temperatura inserida convetida em graus Kelvin e: %.2f", tempKelv);
    return 0;
}