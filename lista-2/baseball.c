/*Leia a hora inicial e a hora final de um jogo de baseball. A seguir calcule a duração do
jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma
duração máxima de 24 horas.
*/

#include <stdio.h>

duracao();

int main()
{
    duracao();
    printf("\n");
}

duracao()
{
    int h1, h2, ht, m1, m2, mt;

    printf("Hora inicial do jogo: ");
    scanf("%d", &h1);
    printf("Minuto inicial do jogo: ");
    scanf("%d", &m1);
    printf("Hora final do jogo: ");
    scanf("%d", &h2);
    printf("Minuto final do jogo: ");
    scanf("%d", &m2);

    if ((60 - m1) + m2 >= 60)
    {
        ht += 1;
        mt = ((60 - m1) + m2) - 60;
    }
    else
    {
        mt = m2 - m1;
    }

    if (h1 >= h2)
    {
        ht = (24 - h1) + h2;
    }
    else
    {
        ht = h2 - h1;
    }
    
    if (ht > 24)
    {
        printf("Jogo invalido");
    }
    else
    {
        printf("%d:%d hrs", ht, mt);
    }
}
