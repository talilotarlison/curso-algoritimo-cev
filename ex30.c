#include <stdio.h>

int main(void) {
float doacao;
int opcao;

printf("[1] Doar 10 reais.\n");
printf("[2] Doar 25 reais. \n");
printf("[3] Doar 50 reais.\n");
printf("[4] Doar outro valor em reais.\n");
printf("[5] Cancelar.\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        doacao = 10;
        printf("doacao %.2f reais.\n",doacao );
        break;
    case 2:
        doacao = 25;
        printf("doacao %.2f reais.\n",doacao );
        break;
    case 3:
        doacao = 50;
        printf("doacao %.2f reais.\n",doacao );
        break;
    case 4:
        printf("Qual o valor em reais.\n");
        scanf("%f", &doacao);
        printf("doacao %.2f reais.\n",doacao );
        break;
    case 5:
        printf("doacao cancelada\n");
        break;
    default:
        printf("Opção inválida.\n");
}
return 0;
}