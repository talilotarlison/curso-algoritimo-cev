#include <stdio.h>
#include <stdlib.h>

int main()
{
// condicional aninhada
    int t1, t2;

    printf("Quantos gols time 1 fez?\n");
    scanf("%d", &t1);

    printf("Quantos gols time 2 fez?\n");
    scanf("%d", &t2);

    if((t1-t2) == 0 ){
        printf("empate\n");
    }else if((t1-t2) >= 1 && (t1-t2) <= 3  ){
         printf("vitoria normal\n");      
    }else if((t2-t1) >= 1 && (t2-t1) <= 3  ){
         printf("vitoria normal\n");      
    }else if((t1-t2) >=4 ){
         printf("goleada\n");
    }else if((t2-t1) >=4 ){
         printf("goleada\n");
    }
    
    return 0;
}