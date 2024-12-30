#include <stdio.h>
#include <stdlib.h>

int main()
{
// condicional aninhada
    float dinheiro;
    printf("Quanto dinheiro voce tem?\n");
    scanf("%f", &dinheiro);

    if(dinheiro >= 10000){
        printf("Você pode viajar\n");
    }else{
        if(dinheiro >= 5000 && dinheiro < 10000){
            printf("Visitar familia\n");
        }else{
            printf("Você nao pode viajar\n");
        }
    }
    return 0;
}