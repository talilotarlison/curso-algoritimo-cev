#include <stdio.h>
//https://www-quora-com.translate.goog/Can-two-variables-have-the-same-address-in-C?_x_tr_sl=en&_x_tr_tl=pt&_x_tr_hl=pt&_x_tr_pto=tc
int main()
{
    int valor=3; 
    int* p1= &valor; 
    int* p2= &valor; 
   
    printf("resultado 1 : %d", *p1); // o resultado é 3 
    *p2 = 7; 
    printf("resultado 2 :%d", valor); // o resultado é 7 

    return 0;
}
