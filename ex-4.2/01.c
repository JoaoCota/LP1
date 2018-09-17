#include <stdio.h>

int todos_os_primos(int n)
{
	int i, count;
	while (n>0){
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
		n--;
		count=0;	
	}
}
int main(void)
{	
	int max;
	printf("Digite um numero para exibir os primos menores que ele: \n\n");
	scanf("%d", &max);
	int x = todos_os_primos(max);
	printf("\n================================ \n :FIM DO PROGRAMA:");
	return 0;
}

