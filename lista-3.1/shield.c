/*
A agência S.H.I.E.L.D destina seus recursos para ameaças de forma proporcional ao seu
grau, ou seja, quanto maior a ameaça, mais recursos serão destinados. Com isso, se a
ameaça for de nível D = 5% de aumento, nível C = 10%, B = 15%, A = 20% e O (ômega) =
30%. Crie um programa que recebe um valor inicial e a letra que indica o nível da ameaça,
então calcula o valor final.
*/

#include <stdio.h>

float shield(int escolha, float valor);

int main()
{
    int esc;
    float n1;

    printf("Nivel de ameca\n O=0\n A=1 \n B=2 \n C=3 \n D=4\n");
    scanf("%d", &esc);
    printf("Valor inicial: ");
    scanf("%f", &n1);

    printf("\n%.2f",shield(esc, n1));

}

float shield(int escolha, float valor)
{
    float porcentagem = 0;
    
    switch (escolha)
    {
    case 0:
        porcentagem = 0.3;
        break;
    case 1:
        porcentagem = 0.2;
        break;
    case 2:
        porcentagem = 0.15;
        break;
    case 3:
        porcentagem = 0.1;
        break;
    case 4:
        porcentagem = 0.05;
        break;
    }
    return porcentagem * valor;
}