/*O tempo de uma viagem espacial é dado em segundos, crie um programa que lê o tempo
ao início da viagem TI e o tempo final na chegada TF, então escreva na tela o tempo total
em horas, minutos e segundos.*/

#include <stdio.h>

int tempo();

int main()
{
    tempo();
    printf("\n");
}

tempo()
{
    int secs, hrs, mins, rest;
    printf("Tempo de viagem em segundos: ");
    scanf("%d", &secs);

    hrs = secs / 3600;
    rest = secs % 3600;
    mins = rest / 60;
    rest = secs % 60;

    printf("Horas:%d \nMinutos:%d \nSegundos:%d", hrs, mins, rest);
}