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

    if(imc >= 40){
        printf("obedisade morbida\n");
    }else if((imc >= 35)&& (imc < 40)){
        printf("obesidade severa\n");
    }else if((imc >= 30)&& (imc < 35)){
        printf("obesidade \n");
    }else if((imc >= 25)&& (imc < 30)){
        printf("sobrepeso \n");
    }else if((imc >= 18.5)&& (imc < 25)){
        printf("Seu peso esta ideal\n");
    }else if((imc >= 17)&& (imc < 18.5)){
        printf("abaixo do peso\n");
    }else{
        printf("Voce esta muito abaixo do peso\n");
    }
    return 0;
}