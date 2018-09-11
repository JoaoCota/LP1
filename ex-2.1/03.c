#include <stdio.h>

float dolar_para_reais (float dolar) {
    float real = dolar * 3.17 ;
    return real;
}

int main (void) {
    float valor_celular_dolar;
    printf("Digite o valor do celular em dolares: \n");
    scanf("%f", &valor_celular_dolar);
    float valor_celular_real = dolar_para_reais(valor_celular_dolar);
    printf("Valor em Real: %.2f \n", valor_celular_real);
    if (valor_celular_real<=1000){
    	printf("BOM NEGOCIO!");
	}
	else{
		printf("PESSIMO NEGOCIO!");
	}
	return 0;
}
