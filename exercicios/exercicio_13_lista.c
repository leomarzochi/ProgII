#include <stdio.h>

int calculoArea(float raio);

int main()
{
    float raio, resultado;

    printf("Entre com a raio do circulo: \n");
    scanf("%f", &raio);

    resultado = calculoArea(raio);
    printf("A area do circulo e: %f", resultado);
}

int calculoArea(float raio)
{
    float area;
    area = 3.146 * raio;
    return (area);
}