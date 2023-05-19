/*Crie um programa para ler a inicial do nome de um herói e escrever na tela o nome
completo: H - Homem Aranha, C - Capitão América, T - Thor, P - Pantera Negra. Faça
também uma mensagem caso a letra seja inválida (herói não está na lista)*/

#include <stdio.h>

int inicial();

int main()
{
    inicial();
}

int  inicial()
{
    char ini;

    printf("Inicial do heroi: ");
    scanf("%c", &ini);

    if ((ini == "h") || (ini == "c") || (ini == "t") || (ini == "p"))
    {
        printf("Inicial valida");
    }
    else
    {
        printf("Inicial invalida");
    }
}
