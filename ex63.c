#include<stdio.h>

int main(void)
{
     float notas[2][2] = {{7, 9.5},{ 1,3}};

     printf("Exibindo os Valores da matriz \n\n");
    for (int i = 0; i <=1; i++) {
         for (int j = 0; j <=1; j++) {
        printf("notas[%d][%d] = %.1f\n", i, j, notas[i][j]);
         }
    }

  return 0;
}