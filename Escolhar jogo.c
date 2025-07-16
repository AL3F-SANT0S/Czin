#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numeroSecreto, palpite;
    int escolha;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");

    printf("Escolha uma Opção: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;

        printf("\nDigite um número entre 0 e 9: ");
        scanf("%d", &palpite);

        if (numeroSecreto == palpite)
        {
            printf("\nParabéns, você acertou o número secreto!\n");
            printf("\nO número é secreto: %d\n", numeroSecreto);
        }
        else
        {
            printf("\nNão foi dessa vez, tente novamente!");
            printf("\nO número secreto era: %d\n", numeroSecreto);
        }

        break;
    case 2:
        printf("\nEscolha um número aleatório entre 0 e 9, caso acerte o número gerado aleatóriamente ganhará o jogo!\n");
        break;
    case 3:
        printf("\nFechando o jogo!\n");
        break;
    // Você pode adicionar quantos casos forem necessários
    default:
        printf("\nEscolha Invalida!\n\n");
    }
}