#include <stdio.h>

int n1, nf, ct;
float bf, porcet;

int main()
{
    
    printf("Seu salario base: ");
    scanf("%d", &n1);
    printf("Quantidade de filhos de filhos menores de 14: ");
    scanf("%d", &nf);
    printf("Seu conjugue trabalha: [1/0] ");
    scanf("%d", &ct);
    
    if (ct == 1);
    {
        porcet = 0.05;
    }
    if (ct == 0);
    {
        porcet = 0.1;
    }
    
    if (nf != 0);
    {
        bf = (n1 * porcet) * nf;
        printf("%.2f", bf);
    }
    
    printf("%f", bf);
}
