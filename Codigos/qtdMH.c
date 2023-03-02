/*
Construa um algoritmo que leia um conjunto de dados contendo altura e sexo ("M" para masculino e "F" para feminino) de N pessoas e, depois, calcule e escreva:
A maior e menor altura do grupo;
a média de altura das mulheres;
o número de homens e a diferença percentual entre eles e as mulheres;
*/
#include <stdio.h>

int main()
{
    int i = 1, n, qtdH = 0, qtdM = 0, totalPessoas;
    char sexo;
    float alt, AltM = 0, AltH = 0, perH, perM;
    float maior = 0, menor = 0;
    float mediaM;

    // entrada de dados
    printf("Informe a quantidade de pessoas que deseja: \n");
    scanf("%d", &n);

    // entrando no looping para armazenar informações
    while (i <= n)
    {
        printf("Informe a altura e o Sexo ('M' para Masculino 'F' para feminino)\n");
        scanf("%f %c", &alt, &sexo);
        if (alt > 0)
        {
            if (alt > maior)
            {
                maior = alt;
            }
            else
            {
                menor = alt;
            }

            if (sexo == 'M')
            {
                AltH = AltH + alt;
                qtdH = qtdH + 1;
            }
            else if (sexo == 'F')
            {
                AltM = AltM + alt;
                qtdM = qtdM + 1;
            }
        }
        else
        {
            printf("Altura incorreta.");
            break;
        }
        i++;
    }
    /*
    produzindo algumas respostas;
    */

    //percentual 
    totalPessoas = qtdM + qtdH;
    perH = (qtdH / totalPessoas) * 100;
    perM = (qtdM / totalPessoas) * 100;

    //media altura das mulheres e homens
    mediaM = AltM / qtdM;

    // imprimindo os dados
    printf("A maior altura: [%.2f]\n", maior);
    printf("A menor altura: [%.2f]\n", menor);
    printf("\nO numero de Homens: [%d]\n", qtdH);
    printf("O numero de mulheres: [%d]\n", qtdM);
    printf("\nA media de altura das mulheres: [%.2f]\n", mediaM);
    printf("Percentual de Homens: [%.2f] Porcento\n", perH);
    printf("Percentual de Mulheres: [%.2f] Porcento\n", perM);

    return 0;
}