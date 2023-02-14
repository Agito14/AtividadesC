/*LER N NUMEROS INT E VERIFICAR SE ESTAO ENTRE 1 E 9
 */

#include <stdio.h>

int verificaInt(n)
{

    if (n >= 1 && n <= 9)
        printf("O valor esta na faixa permitida.\n");
    else
        printf("O valor esta fora da faixa permitida.\n");
}

int main()
{
    int num;

    printf("Digite um N inteiro.\n");
    scanf("%d", &num);

    while (num != 0)
    {
        verificaInt(num);
        printf("Digite um N inteiro.\n\n");
        scanf("%d", &num);
    }
}