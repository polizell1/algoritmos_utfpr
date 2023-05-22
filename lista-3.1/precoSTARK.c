/*As Indústrias Stark precisam de um programa para catalogar suas vendas, crie um
programa que recebe o código do produto e a quantidade comprada e calcula o valor total
baseado na tabela abaixo:

1001 -> 10987.5
1324 -> 1200000
6548 -> 775.1
987  -> 3143.75
7623 -> 113030.99

*/

#include <stdio.h>

compras();

int main()
{
    compras();
}

compras()
{
    int parar = 1;

    while (parar == 1)
    {
        int cod = 0, quant = 0;
        float preco = 0, valor = 0;

        printf("\nCodigo do produto: ");
        scanf("%d", &cod);
        
        switch(cod)
        {
            case 1001:
                preco = 10987.5;
                break;
            case 1324:
                preco = 1200000;
                break;
            case 6548:
                preco = 775.1;
                break;
            case 987:
                preco = 3143.75;
                break;
            case 7623:
                preco = 113030.99;
                break;
            
            default:
                printf("Codigo invalido");
                compras();
                break;
        }

        printf("\nQuantidade do produto: ");
        scanf("%d", &quant);


        valor = quant * preco;

        printf("\nO valor a se pagar eh de %.2fU$", valor);

        printf("\n 0-> Nao \n 1->Sim\n");
        printf("\n Quer continuar(1/0): ");
        scanf("%d", &parar);

        if (parar == 0)
        {
            break;
        }

    }
}