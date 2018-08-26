#include <stdio.h>

int main(void)
{
    int vetor[5], i, soma, media;
    // Recebe os numero
    for (i = 0; i <= 4; i++)
    {
        printf("Entre com um número :\n");
        scanf("%i\n", &vetor[i]);
    };
    // Imprime os numeros e soma os mesmos
    for (i = 0; i <= 4; i++)
    {
        printf("%i", vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / 5;
    printf("\n Media : %i", media);
};