#include <stdio.h>

int main(void) {
char opcao = 'B';
switch (opcao) {
    case 'A':
        printf("Opção A escolhida.\n");
        break;
    case 'B':
        printf("Opção B escolhida.\n");
        break;
    case 'C':
        printf("Opção C escolhida.\n");
        break;
    default:
        printf("Opção inválida.\n");
}
return 0;
}