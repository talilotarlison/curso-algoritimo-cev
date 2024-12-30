#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorReal, valorDolar = 6.19, coverter;
    printf("Valor em real que quer converter em dolar\n");
    scanf("%f", &valorReal);

    coverter = valorReal / valorDolar;
    printf("R$ %f em real, equivale a $ %f dolar\n",valorReal,coverter);
    return 0;
}