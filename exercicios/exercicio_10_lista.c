#include <stdio.h>

int main(void)
{
    int matriz[8][8], i, j;

    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            printf("OX", matriz[i][j]);
        }
        printf("\n");
    }
}