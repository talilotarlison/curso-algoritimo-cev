#include <stdio.h>
#include <stdlib.h>

int main()
{

    float celsius, fahrenheit;
    printf("Valor da temperatura em fahrenheit?\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32) / 1.8;
    printf("Temperatura em C é %.2f \n",celsius);
    return 0;
}