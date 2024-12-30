#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Biblioteca com comandos de data e hora

// https://www.clubedohardware.com.br/forums/topic/1273224-retornar-o-ano-atual-no-sistema-e-exibir-na-tela-em-c/#google_vignette

int main()
{

    int anoAtual, anoNacimento, idade;//Esta variável foi criada para receber o resultado do comando que exibe o ano atual.
    time_t data_ano;//Foi criada uma variável chamada data_ano que é do tipo time_t que é um tipo de variável que recebe valores de data e hora.
    time(&data_ano);

    struct tm *data = localtime(&data_ano);

    anoAtual = (data->tm_year+1900);
    printf("Entre com a data nascimento\n");
    scanf("%d", &anoNacimento);

    idade = anoAtual -anoNacimento;
    printf("voce tem %d anos\n",idade);
    return 0;
}