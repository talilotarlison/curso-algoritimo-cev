#include <stdio.h>
#include <stdlib.h>

int main()
{

    float dinheiro;
    printf("Quanto dinheiro voce tem?\n");
    scanf("%f", &dinheiro);

    if(dinheiro >= 10000){
        printf("Você pode viajar\n");
    }else{
        printf("Você nao pode viajar\n");
    }
    return 0;
}