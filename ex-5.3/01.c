#include <stdio.h>
#include <stdlib.h>

void compra(int* p, int valor){
    printf("Saldo conta utilizada: R$ %d.00", *p);
}

int main()
{
    int minha_conta1, minha_conta2, i;
    int* p;
    int* p1;
    int compras[] = {100, 50, 80, 30, 20};
    int valor;
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &minha_conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &minha_conta2);
    for (i=0; i<=4; i++){
        valor = compras[i];
        if (minha_conta1>minha_conta2){
            minha_conta1 -= valor;
            p = &minha_conta1;
            p1 = &minha_conta2;
        }
        else{
            minha_conta2 -= valor;
            p = &minha_conta2;
            p1 = &minha_conta1;
        }
        printf("\nSaldo pos compra\n------------------------------------------\n");
        compra(p, valor);
        printf("\nSaldo conta nao utilizada: R$ %d.00\n", *p1);
        printf("------------------------------------------\n");
    }
    return 0;
}
