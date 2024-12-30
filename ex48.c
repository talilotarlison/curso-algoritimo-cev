#include <stdio.h>

int main(void) {
    int i = 1;
    int num , totalNegativos=0;
    do {
         printf("Qual numero quer adicionar?");
        scanf("%d", &num);
        if(num <0){
            totalNegativos++;
        }
        i++;
    } while (i <= 4);

    printf("total negativos %d \n", totalNegativos);
    return 0;
}