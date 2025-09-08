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

// No código fornecido, as variáveis ponteiras p1 e p2 de fato apontam para o mesmo endereço de memória, que é o endereço da variável valor.
// Portanto, elas armazenam o mesmo endereço. Como resultado, o valor apontado por ambas, isto é, o valor na memória apontada, é o valor da variável valor.

// Portanto, os ponteiros p1 e p2 apontam para a mesma posição de memória onde valor está armazenado, logo o valor que podem acessar ou modificar é o mesmo.
// Os ponteiros possuem o mesmo valor (endereço) e permitem manipular o conteúdo daquele endereço.

// Essa é uma característica fundamental em C, onde ponteiros são variáveis que armazenam endereços de memória, podendo várias variáveis ponteiras apontar para o mesmo endereço.

// Em resumo: Sim, no código apresentado, p1 e p2 apontam para o mesmo endereço e compartilham o valor armazenado nesse endereço (o valor de valor).
