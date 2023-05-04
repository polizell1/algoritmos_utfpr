#include <stdio.h>

long n1;
int n2;
int main()
{
    printf("Numero de galaxias: ");
    scanf("%d", &n2);
    n1 = n2 * 17000000000;
    printf("Existem %ld planetas em %d galaxias", n1, n2);
}