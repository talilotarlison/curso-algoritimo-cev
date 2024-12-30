#include <stdio.h>
int soma,media,n,somaPar;
int main(void) {
    for (int i = 0; i < 4; i++) {
       printf("Informe um numero para calcular.\n ");
        scanf("%d", &n); 
        soma = soma + n;
        if(n%2==0){
            somaPar = somaPar + n;
        }

    }
        media = soma/5;   

     printf("media dos numeros; %d\n", media);
     printf("soma dos numeros; %d\n", soma);
      printf("soma dos numeros pares; %d\n", somaPar);
    return 0;
}