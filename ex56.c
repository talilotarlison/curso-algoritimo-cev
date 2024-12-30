#include<stdio.h>

int parOuImpar(int n1) // funcao par ou impar
{
  if(n1%2==0){
     printf("%d e par\n", n1);
  }else{
     printf("%d e impar\n", n1);
  }

  return 0;
}


int main(void)
{
  int v1;

  v1 =10;
  parOuImpar(v1);

  return 0;
}