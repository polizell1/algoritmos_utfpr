/*
Crie um programa leia um número correspondente a cada um dos nove reinos para viajar
através de um portal, então o programa deve escrever na tela o mundo escolhido, a partir
da seguinte classificação: 
1-Asgard, 2-Midgard, 3-Jotunheim, 4-Vanaheim, 5-Svartalfheim,
6-Nidavellir, 7-Muspelheim, 8-Alfheim, 9-Niflheim.
*/

#include <stdio.h>

int reino(int x);

int main()
{
    int n1;

    printf("Qual reino deseja viajar: ");
    scanf("%d", &n1);

    reino(n1);
    printf("\n");
}

int reino(x)
{
    switch (x)
    {
    case 1:
        printf("Asgard");
        break;
    case 2:
        printf("Midgard");
        break;
    case 3:
        printf("Jotunheim");
        break;
    case 4:
        printf("Vanaheim");
        break;
    case 5:
        printf("Svartalfheim");
        break;
    case 6:
        printf("Nidavellir");
        break;
    case 7:
        printf("Muspelheim");
        break;
    case 8:
        printf("Alfheim");
        break;
    case 9:
        printf("Niflheim");
        break;
    default:
        break;
    }
}
