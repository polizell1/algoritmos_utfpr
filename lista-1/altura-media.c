#include <stdio.h>

float n1, n2;

int main()
{
    printf("Altura 01: ");
    scanf("%f", &n1);
    printf("Altura 02: ");
    scanf("%f", &n2);
    printf("A altura média é %.2f", (n1+n2)/2);
}