#include <stdio.h>

void preenche(int arr[3][2], int lc);
float media(int arr[3][2], int l, int c);

int main(void)
{
	int arr[3][2], lc, l = 3, c = 2; 
	float med;
	lc = l*c;
	preenche(arr, lc);
	med = media(arr, l, c);
	printf("Media dos valores do array: %.1f\n", med);
	return 0;
}

void preenche(int arr[3][2], int lc)
{
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Digite o valor de [%d][%d]: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
}

float media(int arr[3][2], int l, int c)
{
	float med = 0, soma = 0; 
	int i , j;
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			soma+=arr[i][j];
		}
	}
	med = (soma/(l*c));
	return med;
}
