#include <stdio.h>

struct Aluno
{
    char nome[30];
    float media;
    int ra;
};

int main()
{
    int i;
    struct Aluno classe[2];

    for (i = 0; i <= 1; i++)
    {
        printf("Digite o nome do aluno: \n");
        fgets(classe[i].nome, 30, stdin); //variavel, máximo de letras, stdin

        printf("Digite a media: \n");
        scanf("%f", &classe[i].media);
        fflush(stdin);

        printf("Digite o RA: \n");
        scanf("%d", &classe[i].ra);
        fflush(stdin);
    }

    printf("*### Relatório ###*\n");

    for (i = 0; i <= 1; i++)
    {
        printf("%s %f.1 %d", classe[i].nome, classe[i].media, classe[i].ra);
    }
}