
#include <stdio.h>


int main (void) {
	int n1, n2, i;
	printf("Digite n1: \n");
	scanf("%d", &n1);
	printf("Digite n2: \n");
	scanf("%d", &n2);
	if(n1<n2){
		printf("Numeros entre n1 e n2:\n");
		for(i=n1+1;i<n2;i++){
			printf("->%d \n", i);
		}
	}
	else{
		printf("Numeros entre n1 e n2:\n");
		for(i=n2+1;i<n1;i++){
			printf("->%d \n", i);
		}
	}	
    return 0;
}
