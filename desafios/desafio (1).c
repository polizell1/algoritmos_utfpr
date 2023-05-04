#include <stdio.h>
#include <stdlib.h>

int i = 1, jog, pc, jvits, pcvits, empates;

void computador()
{
    pc = rand() % 5;
    if (pc == 0)
    {
        printf("\nO computador jogou Pedra");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }
    if (pc == 1)
    {
        printf("\nO computador jogou Papel");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }
    if (pc == 2)
    {
        printf("\nO computador jogou Tesoura");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }
    if (pc == 3)
    {
        printf("\nO computador jogou Lagarto");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }
    if (pc == 4)
    {
        printf("\nO computador jogou Spock");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    }

}

void decicao()
{
    int vit = 0;
    if (jog == pc)
    {
        printf("\nEmpate");
        empates++;
    }
    else
    {

        if (jog == 0 && (pc == 2 || pc == 3))
        {
            printf("\nVoce ganhou");
            vit = 1;
            jvits++;
        }
        if (jog == 1 && (pc == 0 || pc == 4))
        {
            printf("\nVoce ganhou");
            vit = 1;
            jvits++;
        }
        if (jog == 2 && (pc == 3 || pc == 2))
        {
            printf("\nVoce ganhou");
            vit = 1;
            jvits++;
        }
        if (jog == 3 && (pc == 4 || pc == 1))
        {
            printf("\nVoce ganhou");
            vit = 1;
            jvits++;
        }
        if (jog == 4 && (pc == 2 || pc == 0))
        {
            printf("\nVoce ganhou");
            vit = 1;
            jvits++;
        }
        if (vit == 0)
        {
            printf("\nO computador ganhou");
            pcvits++;
        }

    }
}

int main()
{
    printf("-=-=-Pedra, Papel, Tesoura, Lagarto e Spock-=-=-");
    for (i=1; i <=10; i++)
    {   
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\nPedra = 0 \nPapel = 1 \nTesoura = 2 \nLagarto = 3 \nSpock = 4 \n");
        printf("\nFaca sua jogada %d: ", i);
        scanf("%d", &jog);
        
        computador();
        decicao();
    }
    printf("\nVoce venceu %d vezes, o computador %d vezes e empatou %d", jvits, pcvits, empates);
}