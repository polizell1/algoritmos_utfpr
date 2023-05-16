#include "bibpoli.h"
#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Valor a ser fatorado: ");
    scanf("%d", &a);
    printf("%d", Fatorial(a));
    printf("\n");

    printf("Valor da base: ");
    scanf("%d", &b);
    printf("Valor do expoente: ");
    scanf("%d", &c);
    printf("%d", Potencia(b, c));
    printf("\n");

    printf("Numero de termos da Soma Fibonacci: ");
    scanf("%d", &d);
    printf("%d", SomaFibonacci(d));
    printf("\n");

    printf("Numero de alturas: ");
    scanf("%d", &e);
    printf("%f", MediaAltura(e));
    printf("\n");

    return 0;
}