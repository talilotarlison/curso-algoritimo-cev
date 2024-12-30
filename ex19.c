#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Qual numero quer saber se e par ou impar?\n");
    scanf("%d", &n);

    if(n%2==0){
        printf("numero par\n");
    }else{
        printf("numero impar\n");
    }
    return 0;
}