#include <stdio.h>

int main(void) {
    int i = 1;
    int soma = 0;
    int numero,maiorNumero=0;

    while (i <= 3) {
        printf("Insira valor %d para soma?\n", i);
        scanf("%d", &numero);
        if(numero >= maiorNumero){
            maiorNumero = numero;
        }
        soma = soma + numero;
        i++;
    }
      printf("total da soma : %d \n", soma);
       printf("maior numero : %d \n", maiorNumero);
    return 0;
}