#include <stdio.h>
int diferenca(int v1, int v2);

int main()
{
    int v1, v2, resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%i", &v1);

    printf("Digite o segundo numero: \n");
    scanf("%i", &v2);

    resultado = diferenca(v1, v2);
    printf("Diferença: %i", resultado);
}

int diferenca(int v1, int v2)
{
    int resultado;
    resultado = v1 - v2;
    return (resultado);
}