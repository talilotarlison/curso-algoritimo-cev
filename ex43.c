#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorReal, valorDolar = 6.19, coverter;
    int i = 1, quantidade;
    printf("Quantas vezes que quer converter em dolar\n");
    scanf("%d", &quantidade);
    while (i <= quantidade) {
        printf("Valor em real que quer converter em dolar\n");
        scanf("%f", &valorReal);
        
        coverter = valorReal / valorDolar;
        printf("R$ %.2f em real, equivale a $ %.2f dolar\n",valorReal,coverter);
        i++;
    }

    return 0;
}

