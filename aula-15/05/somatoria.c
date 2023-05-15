#include <stdio.h>

int main()
{
    int faltas[40];
    int n=0, soma=0;
    float media, somatotal = 0, varianca;

    while (n<40)
    {
        do
        {
            printf("\n Informe faltas: ");
            scanf("%d", faltas[n]);

        }while (faltas[n]<0);

        soma = soma + faltas[n];
        n++;
        
    }
    media = (float)soma/n;
    printf("Media = %.2f", media);

    for (n=0; n<40; n++)
    {
        somatotal = somatotal + (faltas[n] - media) * (faltas[n] * faltas[n]);
    }
    

}   