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
  printf("notas[0] = %.1f\n", notas[0]);
  printf("notas[1] = %.1f\n", notas[1]);
  printf("notas[2] = %.1f\n", notas[2]);
  printf("notas[3] = %.1f\n", notas[3]);

  return 0;
}