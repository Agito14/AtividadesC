int main()
{
    // i sendo o contador inicial para entrar no while e definir as casas (quadrados) do tabuleiro
    // g sendo o total de grãos de arroz por quadrado, sendo duplicado pela quantidade do quadro anterior
    // s sendo a variavel para guardar o valor de graos no quadrado atual, e acumulando para guardar o total
    int i = 0;
    // long DOBRA a quantidade de bits da variavel
    long double graos = 1, somatorio = 1;

    while (i < 64)
    {
        i = i + 1;
        if (i > 1)
        {
            graos = graos * 2;
            somatorio = somatorio + graos;
            printf("%d valor: %Lf\n", i, graos);
            //função da linguagem para valores absurdos de grandes 
            __mingw_printf("%d valor: %Lf\n", i, graos);
        }
    }

    printf("A quantidade de graos de arroz esperado pelo monge vai ser de: [%Lf]\n", somatorio);
    __mingw_printf("A quantidade de graos de arroz esperado pelo monge vai ser de: [%Lf]", somatorio);
    return 0;
}

/*
laço for para resolver o problema 

for(i=1; i<64; i++) 
{
    graos = graos * 2;
    somatorio = somatorio + graos;
    printf("Quadrado numero %d tem o %d graos.\n", i, graos);
}
*/