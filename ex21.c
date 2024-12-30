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

    if(idade >= 18){
        printf("voce ja pode tirar a carteira e dirigir\n");
    }else{
        printf("voce nao pode dirigir nem tirar carteira\n");
    }
    return 0;
}