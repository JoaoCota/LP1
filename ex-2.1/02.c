#include <stdio.h>

int main (void) {
	int n1, n2;
    printf("Numero 1: \n");
    scanf("%d", &n1);
    printf("Numero 2: \n");
	scanf("%d", &n2);
	if (n1>n2){ printf("Maior numero: %d.", n1); }
	else 	  { printf("Maior numero: %d.", n2); }
    return 0;
}
