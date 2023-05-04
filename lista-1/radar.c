#include <stdio.h>
#include <math.h>

#define PI (3.141592653589793)

float n1;
long n2;

int main()
{
    printf("Circuferencia do planeta: ");
    scanf("%f", &n1);
    n2 = (pow((4 * PI) * (n1 / 2), 3)) / 3;
    printf("%.3ld", n2);
}