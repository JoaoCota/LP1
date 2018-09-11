#include <stdio.h>

int main (void) {
	char nome, N, n;
	int i=1, v, e, d, ponto_atual, P=0, p=1;
	while(i<=20){
		printf("Digite o nome do time %d: \n", i);
		scanf("%s", &nome);
		printf("Digite o numero de vitorias: \n");
		scanf("%d", &v);
		printf("Digite o numero de empates: \n");
		scanf("%d", &e);
		printf("Digite o numero de derrotas: \n");
		scanf("%d", &d);
		ponto_atual = (v*3) + e;
		if(ponto_atual>P){
			P = ponto_atual;
			N = nome;
		}
		else{
			p = ponto_atual;
			n = nome;
		}
		
		i+=1;
	}
	printf("Time %c tem mais pontos.\n", N);
	printf("Time %c tem menos pontos.\n", n);
    return 0;
}
