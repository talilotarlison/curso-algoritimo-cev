#include<stdio.h>
// 1.  Função :
// -  Retorno de valor : Uma função é um bloco de código que executa uma operação e retorna um valor. Por exemplo, uma função que soma dois números e retorna o resultado.
// -  Uso : As funções são frequentemente usadas quando você precisa de um resultado para continuar a execução de um programa. Você pode chamar uma função em expressões e atribuir seu resultado a uma variável.
// -  Sintaxe : Geralmente, você define uma função com uma declaração que inclui o tipo de dado que será retornado, nome da função, parâmetros e o corpo que contém a lógica.


// 2.  Procedimento  (ou sub-rotina):
// -  Sem retorno de valor : Um procedimento é um bloco de código que executa uma tarefa, mas não retorna um valor. Em vez disso, ele pode realizar ações como imprimir algo na tela ou modificar uma variável global.
// -  Uso : Procedimentos são úteis para agrupar código que realiza uma série de operações, especialmente se essas operações não precisam devolver um resultado.
// -  Sintaxe : A definição de um procedimento normalmente não inclui um tipo de retorno, ou é explicitamente definido como "void" em algumas linguagens.

int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  printf("%d", resultado);
  return 0;
}


int main(void)
{
  int v1, v2;

  v1 =10;
  v2=20;
  multiplica(v1,v2);

  return 0;
}