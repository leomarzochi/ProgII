#include <stdio.h>

int main(void)
{
    int vetor[3], i, j;
    for (i = 0; i <= 2; i++)
    {
        printf("Digite o valor para preencher o vetor: \n");
        scanf("%d", &vetor[i]);
    };
    for (j = 0; j <= 2; j++)
    {
        printf("-%d", vetor[j]);
    }
};
