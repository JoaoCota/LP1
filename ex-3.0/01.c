#include <stdio.h>
#include <string.h>

int main(void)
{
	char temps[50];
	short temp, x, soma_temp = 0, media, loop, count = 0;
	for (x=0; x<=2; x++)
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
			soma_temp += temp;
		}
	}
	media = soma_temp/3;
	for (loop=0; loop<=2; loop++)
	{
		if(temps[loop] > media)
		{
			count++;
		}
	}
	
	printf("Media das temperaturas --> %hd. \n", media);
	printf("%d temperatura(as) acima da media.", count);
	return 0;
}
