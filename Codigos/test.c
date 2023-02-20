/*LER N NUMEROS INT E VERIFICAR SE ESTAO ENTRE 1 E 9
 */

#include <stdio.h>
#include <locale.h>

int verificaInt(n)
{
    setlocale(LC_ALL, "Portuguese");
    
    if (n >= 1 && n <= 9)
        printf("O valor está na faixa permitida. =) \n");
    else
        printf("O valor não está na faixa permitida. x) \n");
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