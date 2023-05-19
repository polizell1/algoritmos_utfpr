#include <stdio.h>

duracao(int h1, int h2, int m1, int m2);

int main()
{
    int H1, H2, M1, M2;

    printf("Hora inicial do jogo: ");
    scanf("%d", &H1);
    printf("Minuto inicial do jogo: ");
    scanf("%d", &M1);
    printf("Hora final do jogo: ");
    scanf("%d", &H2);
    printf("Minuto final do jogo: ");
    scanf("%d", &M2);

    printf(duracao(H1, H2, M1, M2));

    


}

duracao(h1, h2, m1, m2)
{
    int ht, mt;

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
    
    return ht, mt;

}
