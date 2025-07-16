#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int escolhaJogador, escolhaMaquina;

    srand(time(0));

    printf("**** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaMaquina = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("\nJogador: Pedra - ");
        break;

    case 2:
        printf("\nJogador: Papel - ");
        break;

    case 3:
        printf("\nJogador: Tesoura - ");
        break;

    default:
        printf("\nEscolha Invalida!\n");
        break;
    }

    switch (escolhaMaquina)
    {
    case 1:
        printf("Máquina: Pedra\n");
        break;

    case 2:
        printf("Máquina: Papel\n");
        break;

    case 3:
        printf("Máquina: Tesoura\n");
        break;

    default:
        printf("\nEscolha Invalida!\n");
        break;
    }

    if (escolhaJogador == escolhaMaquina)
    {
        printf("### Jogo empatado! ###\n");
    }
    else if ((escolhaJogador == 1) && (escolhaMaquina == 3) ||
             (escolhaJogador == 2) && (escolhaMaquina == 1) ||
             (escolhaJogador == 3) && (escolhaMaquina == 2))
    {
        printf("### O jogador venceu a partida! ###\n");
    }
    else
    {
        printf("### A máquina venceu a partida! ###\n");
    }

    return 0;
}