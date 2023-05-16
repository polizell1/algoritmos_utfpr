#ifndef BIBPOLI_H
#define BIBPOLI_H

#include <stdio.h>

int Fatorial(int n)
{
    int fat = 1;

    while (n > 0)
    {   
        fat = fat * n;
        n = n - 1;
    }

    return fat;
}

int Potencia(int x, int y)
{
    int i = 1, pot = x;

    for(i = 1; i <= y; i++)
    {
        pot = pot * x;
    }
    

    return pot;
    
}

int SomaFibonacci(int n)
{
    int i = 0, a = 0, b = 1, c;

    for (i = 0; i <= n + 0; i++)
    {
        c = a + b;
        a = b;
        b = c;

    }

    return c - 1;
}

float MediaAltura(float n)
{
    int i = 1;
    float media, altura, altura2 = 0;

    for(i = 1; i <= n; i++)
    {
        printf("\nAltura %d: ", i);
        scanf("%f", &altura);
        altura2 += altura;
    }
    media = altura2 / n;

    return media;
}

#endif