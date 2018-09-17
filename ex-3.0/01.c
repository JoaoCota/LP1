#include <stdio.h>
#include <string.h>

int main(void)
{
	char temps[50];
	short temp, x, count = 0, media;
	for (x=0; x<=49; x++)
	{
		printf("Digite uma temperatura entre -100  e 100. \n");
		scanf("%hd", &temp);
		temps[x] = temp;
		if ((temp < -100) || (temp > 100))
		{
			printf("\n ERRO --> Digite apenas temperaturas entre -100  e 100. \n\n");
			x--;
		}
		else
		{
			count += temp;
		}
	}
	media = count/3;
	printf("Media das temperaturas --> %hd.", media);
	return 0;
}
