#include <stdio.h>

int main(void) {
    int i = 1;
    int soma = 0;
    int numero;

    while (i <= 3) {
        printf("Insira valor %d para soma?\n", i);
        scanf("%d", &numero);
        soma = soma + numero;
        i++;
    }
      printf("total da soma : %d \n", soma);
    return 0;
}