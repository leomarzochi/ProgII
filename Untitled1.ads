#include <stdio.h>

int main(void)
{
    int matriz[2][3], i, j; // [linhas][colunas]

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Entre com os valores: \n");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; i <= 2; i++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}
