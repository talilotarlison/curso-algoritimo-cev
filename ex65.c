#include<stdio.h>

// pegar a matrix identidade de terceira ordem orderm ou quarta ordem

int main(void)
{
     float notas[3][3] = {{7, 9.5,5},{ 1,3,7},{ 1,10,17}};

     printf("Exibindo os Valores da matriz \n\n");
    for (int i = 0; i <=2; i++) {
         for (int j = 0; j <=2; j++) {
            // pegando os valores da diagonal principal
            if(i==j){
                printf("notas[%d][%d] = %.1f\n", i, j, notas[i][j]);
            }else{
               printf("notas[%d][%d] = %.1d\n", i, j, 0);
            }

         }
    }

  return 0;
}