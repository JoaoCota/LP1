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
		printf("--> %d \n", n);
	}
}

int todos_os_primos(int n)
{
	while (n>0){
		int x = eh_primo(n);
		n--;
	}
}
int main(void)
{
	int max;
	printf("Digite um numero para exibir os primos menores que ele: \n\n");
	scanf("%d", &max);
	int y = todos_os_primos(max);
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}

