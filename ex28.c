#include <stdio.h>
 
int main(void) {
    int idade = 30;
    if (idade < 18) {
        printf("Você é menor de idade.\n");
    } else if (idade >= 18 && idade <= 30) {
        printf("Você é jovem adulto.\n");
    }else {
        printf("Você é adulto.\n");
    }
return 0;
}