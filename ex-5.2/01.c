#include <stdio.h>
#include <stdlib.h>

void compra(int* p, int valor){
    int x = *p-valor;
    printf("Saldo conta utilizada: R$ %d.00", x);
}

int main()
{
    int minha_conta1;
    int minha_conta2;
    int* p;
    int* p1;
    int valor;

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &minha_conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &minha_conta2);
    printf("Digite o valor da compra: ");
    scanf("%d", &valor);
    printf("\nSaldo antes da compra\n------------------------------------------\n");
    printf("A conta 1 possui um saldo de R$ %d.00", minha_conta1);
    printf("\nA conta 2 possui um saldo de R$ %d.00\n", minha_conta2);
    printf("------------------------------------------\n");

    if (minha_conta1>minha_conta2){
        p=&minha_conta1;
        p1=&minha_conta2;
    }
    else{
        p=&minha_conta2;
        p1=&minha_conta1;
    }
    printf("\nSaldo final\n------------------------------------------\n");
    compra(p, valor);
    printf("\nSaldo conta nao utilizada: R$ %d.00\n", *p1);
    printf("------------------------------------------\n");

    return 0;
}
