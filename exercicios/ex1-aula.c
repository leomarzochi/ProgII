#include <stdio.h>

int main(void)
{
    float notas[2][3], soma1 = 0, soma2 = 0, media1 = 0, media2 = 0;
    int i, j;

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Digite as notas: \n");
            scanf("%f", &notas[i][j]);
        };
    };
    for (j = 0; j <= 2; j++)
    {
        soma1 = soma1 + notas[0][j];
        soma2 = soma2 + notas[1][j];
    };
    media1 = soma1 / 3;
    media2 = soma2 / 3;
    printf("media1 = %f \n", media1);
    printf("media2 = %f \n", media2);
}