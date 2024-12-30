#include<stdio.h>

int main(void)
{
  float notas[4] = {7, 9.5, 1,3};

  float aux;
   // ordenacao de valores com c
  // declarando e inicializando o vetor notas
      for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
            if(notas[i]>notas[j]){
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
      }
    }
     printf("Exibindo os Valores do Vetor \n\n");
    for (int k = 0; k < 4; k++) {
        printf("notas[%d] = %.1f\n",k, notas[k]);
    }
 
  return 0;
}