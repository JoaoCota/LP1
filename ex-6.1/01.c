#include <stdio.h>
#include <stdlib.h>

int preenche(float vec[100], int n)
{	
	printf("Digite a quantidade de termos do vetor -> ");
	scanf("%d", &n);
	int i;
	for(i = 0; i<n; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", (vec+i));
	}
	return n;
}

float media(float vec[100], int n)
{	
	float med, total=0.00;
	int i;
	for (i = 0; i<n; i++)
	{
		total += *(vec+i);
	}
	printf("\nMedia do vetor -> %.2f\n",total/n);
	return med;
}

int main(void)
{	
	float vec[100];
	int n;
	n = preenche(vec,n);
	media(vec, n);
}