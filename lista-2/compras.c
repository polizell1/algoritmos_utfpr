#include <stdio.h>

int n1, n2, n3, n4;

int main()
{
	printf("Unidades do p1: ");
	scanf("%d", &n1);
	printf("Unidades do p2: ");
	scanf("%d", &n2);
	printf("Unidades do p3: ");
	scanf("%d", &n3);
	printf("Unidades do p4: ");
	scanf("%d", &n4);
	
	if (n1 % 3 == 0)
	{
		printf("\nO produto 01 eh divisivel por 3");
	}
	else
	{
		printf("\nO produto 01 nao eh divesivel por 3");
	}
	if (n2 % 3 == 0)
	{
		printf("\nO produto 02 eh divisivel por 3");
	}
	else
	{
		printf("\nO produto 02 nao eh divesivel por 3");
	}
	if (n3 % 3 == 0)
	{
		printf("\nO produto 01 eh divisivel por 3");
	}
	else
	{
		printf("\nO produto 01 nao eh divesivel por 3");
	}
	if (n4 % 3 == 0)
	{
		printf("\nO produto 02 eh divisivel por 3");
	}
	else
	{
		printf("\nO produto 02 nao eh divesivel por 3");
	}
}
