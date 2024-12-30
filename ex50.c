#include <stdio.h>

int main(void) {
    int i = 1;
    int num , contDiv=0;
        printf("digite um numero?");
        scanf("%d", &num);
    do {

        if(num % i == 0){
            contDiv++;
        }
        i++;
    } while (i <= num);

    if(contDiv > 2){
         printf("numero %d nao e primo \n", num);
    }else{
          printf("numero %d e primo \n", num);
    }
  
    return 0;
}