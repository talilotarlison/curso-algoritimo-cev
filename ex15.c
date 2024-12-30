#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorProduto, taxa, valorTotal;
    printf("Qual Valor do produto?\n");
    scanf("%f", &valorProduto);

    taxa = (valorProduto*60) / 100;
    valorTotal = valorProduto + taxa;

    printf("O imposto sobre o produto é %.2f \n",taxa);
    printf("Valor total do produto é %.2f \n",valorTotal);
    return 0;
}