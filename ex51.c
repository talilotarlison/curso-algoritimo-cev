#include <stdio.h>

int main(void) {
    int i=1;
    int numero,soma= 0;
    do {
        printf("Qual numero quer somar?");
        scanf("%d", &numero);
        soma = soma + numero;
         printf("Desaja continuar?\n");
         printf("[1] Sim\n");
         printf("[0] Nao\n");
        scanf("%d", &i);
    } while (i == 1);

     printf("soma: %d\n", soma);
    return 0;
}