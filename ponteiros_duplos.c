#include <stdio.h>

int main(void)
{
    char nome[3][10];
    int i = 0;

    for (i = 0; i <= 2; i++)
    {
        printf("Digte o nome: \n");
        gets(nome[i]);
    }

    printf("%s \n", nome[0]); // %s imprime a string completa
    printf("%s \n", nome[1]);

    printf("%c\n", nome[0][3]); // %c imprime o caracter definido [x][y]
}