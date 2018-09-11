#include <stdio.h>

int main (void) {
	int count, n;
	while(1){
		printf("Digite um numero: \n");
		scanf("%d", &n);
		count += n;
		if (n==0){
			printf("Soma dos numeros: %d", count);
			break;
		}
	}
    return 0;
}
