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

    if(idade >= 21){
        printf("voce ja e maior de idade\n");
    }else{
        printf("voce e menor de idade\n");
    }
    return 0;
}