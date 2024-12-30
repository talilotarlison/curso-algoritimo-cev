#include <stdio.h>
// https://pt.stackoverflow.com/questions/485883/argc-argv-com-arquivo
int main(int argc, char *argv[])

{
    char nome[100];
    int idade;
    printf("Entre com seu nome: \n");
    scanf("%s", nome);

    printf("Entre com a idade\n");
    scanf("%d", &idade);


    printf("Bem vindo %s, voce tem %d anos\n",nome, idade);
    return 0;
}