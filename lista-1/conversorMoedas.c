/*Uma das principais moedas do planeta Terra é o dólar, já na maioria dos outros planetas
é usado o Blemflarck, que equivale a $336,00. Crie um programa que dado um valor em
dólares converta-o para Blemflarcks.*/

#include <stdio.h>

int conversor()
{
    float n1, convertido;

    printf("Valor em dolares: ");
    scanf("%f", &n1);

    convertido = n1 * 365;

    printf("\n%.2f dolares vale %.2f Blemflakes", n1, convertido);

}

int main()
{
    conversor();
    printf("\n");
}