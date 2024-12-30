#include <stdio.h>

int main(int argc, char *argv[])

{
    int soma, n1, n2;
    printf("Entre com numero 1 : \n");
    scanf("%d", &n1);

    printf("Entre com numero 2:\n");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("%d\n", soma);
    return 0;
}