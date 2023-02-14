#include <stdio.h>

float calculaMedPond(float x, float y, float z)
{
    float medPond = (x * 3 + y * 2 + z * 1) / 10;
    return medPond;
}

int calculaMedAri(int x, int y, int z)
{
    float medAri = (x + y + z) / 3;
    return medAri;
}

float escolhaMedia(float x, float y, float z, char op)
{
    if (op == 'A')
    {
        return calculaMedAri(x, y, z);
    }
    else if ('P')
    {
        return calculaMedPond(z, y, z);
    }
}

int main()
{
    char op;
    int i = 0;
    int qtdAluno;
    float n1, n2, n3;
    float escolhido;
    // ler quanitade de alunos
    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &qtdAluno);

    while (i < qtdAluno)
    {
        // ler as notas  // perguntar qual media vai ser escolhida
        printf("Digite as notas separadamentes: \nEX: 10, 5, 9 A ou P \n");
        scanf("%f %f %f %c", &n1, &n2, &n3, &op);
        escolhido = escolhaMedia(n1, n2, n3, op);
        printf("\nResultado media: %1.f\n", escolhido);
        i++;
    }
}