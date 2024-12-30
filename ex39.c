#include <stdio.h>

int main(void) {
    int i = 0;
    int contar;
    printf("Quer contar ate quanto?\n");
    scanf("%d", &contar);
    while (i <= contar) {
        printf("contando %d\n", i);
        i++;
    }
    return 0;
}