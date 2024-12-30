#include <stdio.h>
#include <stdlib.h>

int main()
{
// condicional aninhada
    float n1, n2, media;

    printf("Qual nota 1?\n");
    scanf("%f", &n1);

    printf("Qual nota 2?\n");
    scanf("%f", &n2);

    media = (n1 +n2) / 2;
    printf("sua media e : %.2f \n",media);

    if(media >= 9 ){
        printf("A\n");
    }else if(media >= 8 && media < 9){
         printf("B\n");      
    }else if(media >= 7 && media < 8){
         printf("C\n");
    }else if(media >= 6 && media < 7){
         printf("D\n");
    }else{
        printf("E\n"); 
    }
    
    return 0;
}