#include <stdio.h>

int mph_para_kph (int mph) {
    int kph = mph * 1.6 ;
    return kph;
}

int main (void) {
    int velocidade_mph;
    printf("Digite a velocidade atual: \n");
    scanf("%d", &velocidade_mph);
    int velocidade_kph = mph_para_kph(velocidade_mph);
    printf("Velocidade em kph: %d \n", velocidade_kph);
    if (velocidade_kph<80){
    	printf("ACELERE!");
	}
	else if(velocidade_kph>100){
		printf("DESACELERE!");
	}
	else if((velocidade_kph<=100) && (velocidade_kph>=80)){
		printf("MANTENHA!");
	}
	return 0;
}
