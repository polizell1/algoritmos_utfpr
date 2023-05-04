#include <stdio.h> 

int t1;

int main()
{
	printf("Temperatura do exaustor: ");
	scanf("%d", &t1);
	
	if (140 >= t1 &&  120 <= t1)
	{
		printf("Temperatura ideal");
	}
	if (t1 > 140)
	{
		printf("Temperatura acima do ideal");
	}
	if (t1 < 120)
	{
		printf("Temperatura abaixo do ideal");
	}
}
