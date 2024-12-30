#include <stdio.h>

int main(void) {
    int i=1;
    int numero,soma= 0;
    do {
        printf("Qual numero quer somar?");
        scanf("%d", &numero);
        soma = soma + numero;
         printf("Desaja continuar[0/1]?");
         scanf("%d", &i);
    } while (i == 1);

     printf("soma: %d\n", soma);
    return 0;
}