#include <stdio.h>

int main(void) {
    int i = 1;
    int num = 10, resultado;
    do {
        resultado = i * num;
        printf("%d x %d = %d \n ", i,num,resultado);
        i++;
    } while (i <= 10);
    return 0;
}