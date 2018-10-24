#include <stdio.h>

int strlen(char* str);
void strjoin(char* str3, char* str1, char* str2);
int main(void)
{
    char str1[40], str2[40], str3[100];
    printf("Insira a string 1: ");
    gets(str1);
    printf("Insira a string 2: ");
    gets(str2);
    strjoin(str3, str1, str2);
    printf("Nova string: %s", str3);
    return 0;
}

int strlen(char* str)
{
    int i = 0, tamanho = 0;
    while (str[i] != '\0')
    {
        tamanho++;
        i++;
    }
    return tamanho;
}