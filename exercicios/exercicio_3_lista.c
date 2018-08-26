#include <stdio.h>

int main(void)
{

    int vetor[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Entre com um numero: \n");
        scanf("%i", &vetor[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        if (vetor[0] < vetor[i])
        {
            vetor[0] = vetor[i];
        }
    }
    printf("O maior numero é: %i", vetor[0]);
}