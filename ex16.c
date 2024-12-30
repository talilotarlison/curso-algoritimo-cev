#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorEmprestimo, valorTotalPagar,valorParcela;
    int parcelas;
    float taxaJuro = 20;

    printf("Qual Valor do emprestimo?\n");
    scanf("%f", &valorEmprestimo);

    printf("Quantas parcelas\n");
    scanf("%d", &parcelas);

    valorTotalPagar = (valorEmprestimo * (taxaJuro / 100))+valorEmprestimo;
    valorParcela = valorTotalPagar/parcelas;

    printf("O valor total a pagar pelo emprestimo é R$ %.2f \n",valorTotalPagar);
    printf("Pagamento em %d de R$ %.2f \n",parcelas, valorParcela);
    return 0;
}