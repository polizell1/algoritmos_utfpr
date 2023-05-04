#include <stdio.h>

int i = 1, tip, est;
float fat, iA, iB, iC, iD;


void parana();
void santacarina();
void riograndedosul();
void tela();
void tela2();
void desisao();

void tela()
{
    printf("1-Engenharia civil\n2-Mercado\n3-Comercio em geral\n4-Hotelaria");
    printf("\nRamo da empresa: ");
    scanf("%d", &tip);
    printf("\n1-Parana\n2-Santa Catarina\n3-Rio Grande do Sul");
    printf("\nEstado da Empresa: ");
    scanf("%d", &est);
}

void tela2()
{
    printf("\n-=-=--=-=-");
    printf("\nMes 0%d", i);
    printf("\n-=-=--=-=-");
    printf("\nFaturamento = RS ");
    scanf("%f", &fat);
    printf("\nImposto A = RS %.2f", fat * iA);
    printf("\nImposto B = RS %.2f", fat * iB);
    printf("\nImposto C = RS %.2f", fat * iC);
    printf("\nImposto D = RS %.2f", fat * iD);
    printf("\n-=-=--=-=-");
    printf("\nTotal de impostos devidos = RS %.2f", iA*fat + iB*fat + iC*fat + iD*fat);
}
void desisao()
{
    if (est == 1)
    {
        parana();
    }
    if (est == 2)
    {
        santacarina();
    }
    if (est == 3)
    {
        riograndedosul();
    }
}

// banco de dados 
void parana()
{
    if (tip == 1)
    {
        iA = 0.1;
        iB = 0.05;
        iC = 0.02;
        iD = 0.03;
    }
    if (tip == 2)
    {
        iA = 0.07;
        iB = 0.03;
        iC = 0.02;
        iD = 0.05;
    }
    if (tip == 3)
    {
        iA = 0.11;
        iB = 0.03;
        iC = 0.07;
        iD = 0.08;
    }
    if (tip == 4)
    {
        iA = 0.03;
        iB = 0.09;
        iC = 0.01;
        iD = 0.05;
    }

}
void santacarina()
{
    if (tip == 1)
    {
        iA = 0.12;
        iB = 0.067;
        iC = 0.031;
        iD = 0.03;
    }
    if (tip == 2)
    {
        iA = 0.075;
        iB = 0.05;
        iC = 0.04;
        iD = 0.01;
    }
    if (tip == 3)
    {
        iA = 0.12;
        iB = 0.05;
        iC = 0.06;
        iD = 0.06;
    }
    if (tip == 4)
    {
        iA = 0.02;
        iB = 0.1;
        iC = 0.02;
        iD = 0.05;
    }

}
void riograndedosul()
{
    if (tip == 1)
    {
        iA = 0.15;
        iB = 0.06;
        iC = 0.03;
        iD = 0.02;
    }
    if (tip == 2)
    {
        iA = 0.08;
        iB = 0.02;
        iC = 0.01;
        iD = 0.03;
    }
    if (tip == 3)
    {
        iA = 0.13;
        iB = 0.02;
        iC = 0.07;
        iD = 0.08;
    }
    if (tip == 4)
    {
        iA = 0.04;
        iB = 0.08;
        iC = 0.02;
        iD = 0.03;
    }

}
// banco de dados

int main()
{
    tela();

    for (i = 1; i <= 4; i++)
    {
        desisao();
        tela2();
    }
}