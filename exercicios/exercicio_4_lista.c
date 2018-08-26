#include <stdio.h>

int main(void)
{

    int arr[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Entre com o numero :\n");
        scanf("%i", &arr[i]);
    }
    for (i = 4; i >= 0; i--)
    {
        printf("%i", arr[i]);
    }
}