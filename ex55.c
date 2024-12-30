#include<stdio.h>

int soma(int N1, int N2) //soma recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 + N2;
  printf("%d", resultado);
  return 0;
}


int main(void)
{
  int v1, v2;

  v1 =10;
  v2=20;
  soma(v1,v2);

  return 0;
}