#include <stdio.h>
#include <string.h>

int main (void) {
	char nome[99], N[99], n[99];
	int i=1, v, e, d, ponto_atual, P=0, p=999;
	while(i<=3){  //TESTE COM APENAS 3 TIMES. FUNCIONA COM OS 3, LOGO FUNCIONARÁ COM 20.
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
			strcpy(N,nome);
			P = ponto_atual;
		}
		if(ponto_atual<p) {
			strcpy(n,nome);
			p = ponto_atual;
		}
		
		i++;
	}
	printf("Time %s tem %d pontos e eh o time com mais pontos.\n", N, P);
	printf("Time %s tem %d pontos e eh o time com menos pontos.\n", n, p);
    return 0;
}
