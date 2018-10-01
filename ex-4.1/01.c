#include <stdio.h>
int eh_primo(int n)
{
	int i, count=0;
	for (i=1; i<=n; i++)
	{
		if (n%i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int main(void)
{
	int num;
	printf("Digite um numero para saber se ele eh primo ou nao: \n\n");
	scanf("%d", &num);
	int x = eh_primo(num);
	if (x == 1)
	{
        printf("O %d eh primo", num);
	}
	else
	{
        printf("O %d nao eh primo", num);
	}
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}

