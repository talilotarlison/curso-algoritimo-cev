#include <stdio.h>
// https://www.scaler.com/topics/boolean-in-c/
int main(int argc, char *argv[])

{
    int n1, n2;
    _Bool res;
    printf("Entre com numero 1 : \n");
    scanf("%d", &n1);

    printf("Entre com numero 2:\n");
    scanf("%d", &n2);

    res = (n1 > n2);
    if(res==0){
        printf("Falso");
    }else{
       printf("Verdadeiro");
    }

    printf("%d\n", res);
    return 0;
}