/*O laboratório de Hawkins fez uma pesquisa com 100 de seus funcionários, coletando
dados sobre o salário e número de filhos. A empresa deseja saber: a média salarial destes
funcionários; a média do número de filhos; e o percentual de pessoas com salário de até
$500,00, que possuem filhos
*/

#include <stdio.h>

int salario();

int main()
{
    salario();
}

salario()
{
    int i=1, mediaQUI, numFUC = 10, cont, n2, mediaFILprov;
    float mediaSAL, mediaSALprov, mediaFIL, n1;

    for (i=1; i<=numFUC; i++)
    {
        printf("\nMedia salarial (%d): ", i);
        scanf("%f", &n1);
        mediaSALprov += n1;

        if (n1 <= 500)
        {
            cont++;
        }

        printf("\nNumero de filhos (%d): ", i);
        scanf("%d", &n2);
        mediaFILprov += n2;
    }

    mediaSAL = mediaSALprov / (i-1);
    mediaFIL = mediaFILprov / (i-1);

    printf("\n%.2f", mediaSAL);
    printf("\n%.2f", mediaFIL);
    printf("\n%d", cont);

}