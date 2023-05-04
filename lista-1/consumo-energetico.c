#include <stdio.h>
#include <math.h>

int k1, k2, cc, dp;
float gc;
// coloca o cc em float
int main()
{
    printf("Kilomentro inicial: ");
    scanf("%d", &k1);
    printf("Kilomentro final: ");
    scanf("%d", &k2);
    printf("Consumo energetico: ");
    scanf("%d", &cc);
    dp = k2 - k1;
    gc = dp / cc;
    printf("%.2f", gc);
    
}