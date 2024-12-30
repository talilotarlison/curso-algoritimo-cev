#include<stdio.h>

int fat, n;
// https://pt.stackoverflow.com/questions/272152/c-como-calcular-o-fatorial-de-um-numero
int main()
{
printf("Qual numero quer fazer fatorial");
  scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\n%d", fat);
  return 0;
}