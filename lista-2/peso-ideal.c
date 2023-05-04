#include <stdio.h>

int n1;
float pide, h1, sub;

int main()
{
	printf("Seu peso: ");
	scanf("%d", &n1);
	printf("Sua altura: ");
	scanf("%f", &h1);
	pide = (72.7 * h1) - 58;
	printf("Peso ideal eh: %.2fKg", pide);
	
	sub = n1 - pide;
    float(n1);
	
	if (n1 > pide)
	{
		printf("\nVoce precisa perder %.2fKg", sub);
	}
	else
	{
		printf("\n Voce ja esta no peso ideal");
	}
}

