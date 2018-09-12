#include <stdio.h>

struct Aluno
{
    char nome[30];
    float media;
    int ra;
};

int main()
{
    struct Aluno Leonardo;

    printf("Digite o nome do aluno: \n");
    fgets(Leonardo.nome, 30, stdin); //variavel, máximo de letras, stdin

    printf("Digite a media \n");
    scanf("%f", &Leonardo.media);

    printf("Digite o RA: \n");
    scanf("%d", &Leonardo.ra);

    printf("A media e = %.1f \n", Leonardo.media);
    printf("O RA = %i \n", Leonardo.ra);
    printf("Nome completo = %s \n", Leonardo.nome);
}