#include <stdio.h>

int main(void)
{
    float arr[3], soma = 0, media = 0;
    int i;

    for (i = 0; i <= 2; i++)
    {
        printf("Entre com a nota: \n");
        scanf("%f", &arr[i]);
    }
    for (i = 0; i <= 2; i++)
    {
        soma = soma + arr[i];
        printf("%f", soma);
    }
    media = soma / 3;

    if (media >= 6)
    {
        printf("passou!");
    }
    else
        printf("reprovou\n");
    printf("%f", media);
}