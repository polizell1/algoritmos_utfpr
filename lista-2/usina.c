#include <stdio.h>

int n1, n2;

int main()
{
    printf("Quantidade jogada nos rios: ");
    scanf("%d", &n1);
    printf("Quantidade enterrada: ");
    scanf("%d", &n2);
    
    if (n1 <= 1000000 && n2 <= 10000000)
    {
        printf("Tudo certo");
    }
    if (n1 > 1000000 && n2 > 10000000)
    {
        printf("infelizmente teremos que poluir menos");
    }
    
    if (n1 < 1000000 && n2 <= 10000000)
    {
        printf("jogar mais residuos nos rios");
    }
    if (n1 > 1000000 && n2 > 10000000)
    {
        printf("Enterrar mais residuos");
    }
}