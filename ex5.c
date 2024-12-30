#include <stdio.h>
// https://embarcados.com.br/linguagem-c-guia-completo/#Introducao-sobre-a-linguagem-C
int main(int argc, char *argv[])

{
    float media, n1, n2;
    printf("Entre com numero 1 : \n");
    scanf("%f", &n1);

    printf("Entre com numero 2:\n");
    scanf("%f", &n2);

    media = (n1 + n2)/2;

    printf("%f\n", media);
    return 0;
}