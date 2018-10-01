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


void todos_os_primos(int n)
{
	while (n>0)
	{
		int x = eh_primo(n);
		if (x == 1)
		{
            		printf("--> %d\n", n);
		}
		n--;
	}
}
int main(void)
{
	int max;
	printf("Digite um numero para exibir os primos menores que ele: \n\n");
	scanf("%d", &max);
   	todos_os_primos(max);
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}

