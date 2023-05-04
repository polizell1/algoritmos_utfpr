#include <stdio.h>
#include <math.h>
int n1;
float n2;

int main()
{
    printf("Me um valor em Ua: ");
    scanf("%d", &n1);
    n2 = pow(n1, 3) / 10;
    printf("Seria necessario %1.f bombas de neutrino", round(n2));
}