#include <stdio.h>

int apov, n1, n2, n3;
float media;
char nota;

int main()
{
	printf("Nota 01: ");
	scanf("%d", &n1);
	printf("Nota 02: ");
	scanf("%d", &n2);
	printf("Nota 03: ");
	scanf("%d", &n3);
	
	media = ((n1 * 3) +	(n2 * 3) + (n3 * 4)) / 10;
	
	printf("Media ponderada eh: %.2f", media);
	
	if (media >= 9)
	{
		apov = 1;
		nota = 'A';
	}
	if (media < 9 && media >= 8)
	{
		apov = 1;
		nota = 'B';
	}
	if (media < 8 && media >= 7)
	{
		apov = 1;
		nota = 'C';
	}
	if (media < 7 && media >= 5)
	{
		apov = 0;
		nota = 'D';
	}	
	if (media < 5)
	{
		apov = 0;
		nota = 'F';
	}
	
	if (apov == 1)
	{
		printf("\nPassou de ano, tirando a nota %c", nota);
	}
	else
	{
		printf("\nNao passou de ano, tirando a nota %c", nota);
	}
	
}
