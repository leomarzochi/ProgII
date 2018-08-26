#include <stdio.h>

int main(void)
{
    int vetor[5], vetor2[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Entre com os numeros: ");
        scanf("%i", &vetor[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        vetor[i] = vetor2[i];
        printf("vetor2 index i = %i", vetor2[i]);
    }
}