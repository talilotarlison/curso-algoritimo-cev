#include <stdio.h>
#include <stdlib.h>

int main()
{

    int anoAtual, anoNacimento, idade;
    printf("Em que ano nos estamos\n");
    scanf("%d", &anoAtual);

    printf("Entre com a sua data nascimento\n");
    scanf("%d", &anoNacimento);

    idade = anoAtual - anoNacimento;
    printf("voce tem %d anos\n",idade);
    return 0;
}