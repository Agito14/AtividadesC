/*
votos sao informados por numeros, sendo eles {
    1, 2, 3, 4 para respectivos candidatos. 5 = nulo. 6 = voto em branco.
}

Fazer um algoritmo que calcule e escreva:
- o total de votos para cada candidato e seu percentual sobre o total;
- o total de votos nulos e seu percentual;
- o total de votos em branco e seu percentual sobre o total;

ideia:
variaveis [votosTotal, votoCand1, votoCand2, votoCand3, votoCand4, VotoNulo, VotoBranco, Percentual];
*/

int votar(int x)
{
    int totalVotos = 0;
    if (x == 1)
    {
        votoCand1++;
        totalVotos = totalVotos + votoCand1;
        return printf("Votou no candidato numero 1.");
    }
    if (x == 2)
    {
        votoCand2++;
        totalVotos = totalVotos + votoCand2;
        return printf("Votou no Candidato numero 2.");
    }
    if (x == 3)
    {
        votoCand3++;
        totalVotos = totalVotos + votoCand3;
        return printf("Votou no Candiadto Numero 3.");
    }
    if (x == 4)
    {
        votoCand4++;
        totalVotos = totalVotos + votoCand4;
        return printf("Votou no Candidato Numero 4.");
    }
    if (x == 5)
    {
        votoNulo++;
        totalVotos = totalVotos + votoNulo;
        return printf("Votou Nulo.");
    }
    if (x == 6)
    {
        votoBranco++;
        totalVotos = totalVotos + votoBranco;
        return;
    }
    else
    {
        printf("Numero invalido.");
        return;
    }
}

int calculaPercentual(int x)
{
    if (x == 1)
    {
        percentual = (TotalVotos * VotoCand1) / 100;
        return printf("O percentual do Candidato 1 foi de %d", percentual);
    }
    if (x == 2)
    {
        percentual = (TotalVotos * VotoCand2) / 100;
        return printf("O percentual do Candidato 2 foi de %d", percentual);
    }
    if (x == 1)
    {
        percentual = (TotalVotos * VotoCand3) / 100;
        return printf("O percentual do Candidato 3 foi de %d", percentual);
    }
    if (x == 1)
    {
        percentual = (TotalVotos * VotoCand4) / 100;
        return printf("O percentual do Candidato 4 foi de %d", percentual);
    }
    if (x == 1)
    {
        percentual = (TotalVotos * votoNulo) / 100;
        return printf("O percentual de votos Nulos foi de %d", percentual);
    }
    if (x == 1)
    {
        percentual = (TotalVotos * votoBranco) / 100;
        return printf("O percentual de votos brancos foi de %d", percentual);
    }
}

/*votosTotal, votoCand1, votoCand2, votoCand3, votoCand4, VotoNulo, VotoBranco, Percentual];*/

int main()
{
    int votosTotal;
    int votoCand1, votoCand2, votoCand3, votoCand4;
    int votoNulo, votoBranco;
    float percentual;
    int voto;

    pritnf("Bem vindo a Eleição 20xx!\n Para votar siga as instruções abaixo:\n");
    while (voto != 0)
    {
        printf("--------------Votar-----------------");
        pritnf("\nDigite 1 para Candidato 1;\nDigite 2 para candidato 2;\nDigite 3 para candidato 3;\nDigite 4 para candidato 4\n; Digite 5 para votar Nulo;\nDigite 6 para votar em Branco\nDigite 0 para Encerrar a Votação e saber o seu resultado.");
        scanf("%d", &voto);
    }
}
