#include <stdio.h>

int main(void) {
    int i = 0;
    int contar,salto;
    printf("Quer contar ate quanto?\n");
    scanf("%d", &contar);
    printf("Quer valor do salto?\n");
    scanf("%d", &salto);
    while (i <= contar) {
        printf("contando %d\n", i);
        i = i + salto;
    }
    return 0;
}