#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, media;

    printf("Qual nota 1?\n");
    scanf("%f", &n1);

    printf("Qual nota 2?\n");
    scanf("%f", &n2);

    media = (n1 +n2) / 2;
    printf("sua media e : %.2f \n",media);

    if(media >= 7){
        printf("Aprovado\n");
    }else{
        printf("reprovado\n");
    }
    return 0;
}