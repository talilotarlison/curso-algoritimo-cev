#include <stdio.h>
#include <stdlib.h>

int main()
{

    float altura, massa, imc;

    printf("Qual sua altura?\n");
    scanf("%f", &altura);

    printf("Qual seu peso?\n");
    scanf("%f", &massa);

    imc = massa / (altura * altura);
    printf("seu imc e : %.2f \n",imc);

    if((imc >= 18.5)&& (imc < 25)){
        printf("Seu peso esta ideal\n");
    }else{
        printf("Voce nao esta na faixa de peso ideal\n");
    }
    return 0;
}