#include <stdio.h>

int multiplica(int p1, int p2);

int main()
{
    int p1, p2, resultado;

    printf("Entre com o primeiro numero: \n");
    scanf("%i", &p1);

    printf("Entre com o segundo numero: \n");
    scanf("%i", &p2);

    resultado = multiplica(p1, p2);
    printf("Resultado: %i", resultado);
}

int multiplica(int p1, int p2)
{
    int resultado;
    if (p2 == 0)
    {
        return (0);
    }
    else
    {
        resultado = p1 / p2;
        return (resultado);
    }
}