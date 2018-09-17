#include <stdio.h>

int main(void)
{	
	int num, i, count = 0;
	printf("Digite um numero para saber se ele eh primo ou nao: \n\n");
	scanf("%d", &num);
	for (i=1; i<=num; i++)
	{
		if (num%i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("%d eh primo!", num);
	}
	else
	{
		printf("%d nao eh primo!", num);
	}
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}
