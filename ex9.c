#include <stdio.h>

int main(int argc, char *argv[])

{
    float l1, l2,l3;
    
    printf("Entre com lado 1 : \n");
    scanf("%f", &l1);

    printf("Entre com lado 2:\n");
    scanf("%f", &l2);

    printf("Entre com lado :\n");
    scanf("%f", &l3);
    
    if((l1 == l2)&&(l2 == l3)){
        printf("Triangulo EQQUILATERO\n");
    }else if((l1 != l2)&&(l2 != l3)&&(l1 == l3)){
       printf("Triangulo ESCALENO\n");
    }else{
         printf("Triangulo Isoceles\n");
    }

    return 0;
}