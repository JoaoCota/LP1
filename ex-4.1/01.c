#include <stdio.h>
int eh_primo(int n)
{
	int i, count;
	for (i=1; i<=n; i++)
	{
		if (n%i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("%d eh primo!", n);
	}
	else
	{
		printf("%d nao eh primo!", n);
	}
	
}
int main(void)
{	
	int num;
	printf("Digite um numero para saber se ele eh primo ou nao: \n\n");
	scanf("%d", &num);
	int x = eh_primo(num);
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}
