#include <stdio.h>

void soma(int x, int y)
{
    printf("IMPRIMINDO A SOMA");
    printf("\nA soma dos números é igual a %d", x + y);
}

void principal(int n1, int n2)
{
    soma(n1, n2);
}

int main()
{
    principal(3, -6);
}