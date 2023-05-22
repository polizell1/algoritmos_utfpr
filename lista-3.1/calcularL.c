/*
Crie um programa pergunta ao usuário o que ele calcular, com as seguintes opções:
a) Área do quadrado - L²
b) Área da superfície do cubo - 6L²
c) Área da superfície do tesseract - 8L³
Leia também o valor do lado L.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int escolha, lado;
    
    printf("Escolha: ");
    scanf("%d", &escolha);
    printf("Lado: ");
    scanf("%d", &lado);

    switch (escolha)
    {
    case 1:
        lado = pow(lado, 2);
        break;
    case 2:
        lado = lado * 6;
        lado = pow(lado, 2);
        break;
    case 3:
        lado = lado * 8;
        lado = pow(lado, 3);
        break;
    
    default:
        break;
    }

    printf("\n%d\n", lado);

}