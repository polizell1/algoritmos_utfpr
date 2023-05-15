/*Leia a hora inicial e a hora final de um jogo de baseball. A seguir calcule a duração do
jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma
duração máxima de 24 horas.
*/

#include <stdio.h>

duracao(int H1, int M1, int H2, int M2);

int main()
{
    int h1, h2, ht, m1, m2;

    printf("Hora inicial do jogo: ");
    scanf("%d", &h1);
    printf("Minuto inicial do jogo: ");
    scanf("%d", &m1);
    printf("Hora final do jogo: ");
    scanf("%d", &h2);
    printf("Minuto final do jogo: ");
    scanf("%d", &m2);

    duracao(h1, m1, h2, m2);

    printf("\n");
}

duracao(int H1, int M1, int H2, int M2)
{
    int ht;

    if ((60 - M1) + M2 >= 60)
    {
        ht += 1;
        Mt = ((60 - M1) + M2) - 60;
    }
    else
    {
        Mt = M2 - M1;
    }

    if (H1 >= H2)
    {
        ht = (24 - h1) + h2;
    }
    else
    {
        ht = H2 - H1;
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
