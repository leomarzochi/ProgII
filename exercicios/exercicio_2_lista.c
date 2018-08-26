#include <stdio.h>

int main(void)
{

    int vetor[5], i, j;

    for (i = 0; i <= 4; i++)
    {
        printf("Digite um número: \n");
        scanf("%i", &vetor[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            j++;
        }
    }
    printf("Total pares: %i", j);
}