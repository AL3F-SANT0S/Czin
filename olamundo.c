#include <stdio.h>

int main()
{

    int variavel;

    printf("Insira um número: ");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("\n1\n");
        break;
    case 2:
        printf("\n2\n");
        break;
    // Você pode adicionar quantos casos forem necessários
    default:
        printf("\nNenhuma condição atendida!\n\n");
    }
}