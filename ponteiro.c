//Ponteiros e alocação dinÂmica de memória.

#include <stdio.h>

int main(void)
{
    int y = 5;
    int *x = &y;

    printf("O valor de x = %p \n", x);
    printf("O endereço de x = %p \n", &x);
    printf("O valor de y = %i \n", y);
    printf("O endereço de y = %p \n", &y);
    printf("*** \n");
    printf("Novo endereço: %p \n", x + 2);
}

// _*_*_*_Vantagens do uso de ponteiros_*_*_*_
// 1. Caminhar no endereçamento de memória
// 2. Acessar valores e variaveis pelo endereço
// 3. Reservar trechos de memória
