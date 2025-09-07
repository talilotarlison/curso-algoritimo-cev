
//https://www-quora-com.translate.goog/Can-two-variables-have-the-same-address-in-C?_x_tr_sl=en&_x_tr_tl=pt&_x_tr_hl=pt&_x_tr_pto=tc

#include <stdio.h>

int main()
{
    int i=3; 
    int* pi = &i; // pi contém o endereço de i. 
    *pi = 4; // Agora i é 4 
    printf("Agora i é %d\n", i); 

    return 0;
}
