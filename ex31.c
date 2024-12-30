#include <stdio.h>

int main(void) {

   float salario, novoSalario;
   int dependencia;
   char nomeFuncionario[100] ;

    printf("Qual nome funcionario?\n");
    scanf("%s", nomeFuncionario);

    printf("Qual seu salario?\n");
    scanf("%f", &salario);

    printf("Qual sua dependencia?\n");
    scanf("%d", &dependencia);

    switch (dependencia) {
        case 0:
            novoSalario = salario + (salario*5/100) ;
            break;
        case 1: 
        case 2:
        case 3:
            novoSalario = salario + (salario*10/100) ;
            break;
        case 4: 
        case 5:
        case 6:
            novoSalario = salario + (salario*15/100) ;
            break;
        default:
            novoSalario = salario + (salario*18/100) ;
    }

     printf("%s Seu salario e %f\n",nomeFuncionario,novoSalario);

return 0;
}