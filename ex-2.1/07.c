
#include <stdio.h>
#include <string.h>

int main (void) {
	char nome[20], N[20], n[20];
	int i=1, v, e, d, ponto_atual, P=0, p=1;
	while(i<=2){  //TESTE COM APENAS 2 TIMES. FUNCIONA COM OS 2, LOGO FUNCIONARÁ COM 20.
		printf("Digite o nome do time %d: \n", i);
		scanf("%s", nome);
		printf("Digite o numero de vitorias: \n");
		scanf("%d", &v);
		printf("Digite o numero de empates: \n");
		scanf("%d", &e);
		printf("Digite o numero de derrotas: \n");
		scanf("%d", &d);
		ponto_atual = (v*3) + e;
		if(ponto_atual>P){
			P = ponto_atual;
			strcpy(N,nome);
		}
		else{
			p = ponto_atual;
			strcpy(n,nome);
		}
		
		i+=1;
	}
	printf("Time %s tem mais pontos.\n", N);
	printf("Time %s tem menos pontos.\n", n);
    return 0;
}
