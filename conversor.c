#include <stdio.h>

int main()
{
    float tempF, tempC;
    printf("Insira a Temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);
    tempC= (tempF-32)*5/9;
    printf("A temperatura corresponde a %f graus Celsius", tempC); 
    return 0;
}

