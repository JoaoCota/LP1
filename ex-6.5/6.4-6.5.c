#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlength(char* str)
{
	int i=0, count=0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

void strjoin2(char* s3, char* s1, char* s2)
{
	int i, b=0, c;
	c = strlength(s1)+strlength(s2);
	for (i = 0 ; i <= strlength(s1) ; i++)
	{
		s3[i] = s1[i];
	}
	for (i = strlength(s1); i <= c ; i++)
	{
		s3[i] = s2[b];
		b++;
	}
	
}
int main(void)
{
	char s1[100];
	char s2[100];
	char s3[200];
	printf("Digite a string: ");
	gets(s1);
	printf("Digite a string: ");
	gets(s2);
	printf("Quantidade de caracteres: %d\n", strlength(s1));
	strjoin2(s3, s1, s2);
	printf("%s\n", s3);
	

}
