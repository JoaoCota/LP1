#include <stdio.h>


int main(void)
{	
	int a, b;
	int* p;
	printf("Digite um numero --> ");
	scanf("%d", &a);
	printf("\nDigite um numero --> ");
	scanf("%d", &b);
	if(a > b)
	{
		int* p = &a;
		*p = a-50;
		printf("%d, %d.", *p, b);
	}
	else
	{
		int* p = &b;
		*p = b-50;
		printf("%d, %d.", *p, a);	
	}
	return 0;
}
