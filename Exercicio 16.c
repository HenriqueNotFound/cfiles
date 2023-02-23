#include <stdio.h>
#include <stdlib.h>

int main(){

    float dol, real, cot;

    printf("Quantidade de dolares na carteira: ");
    scanf("%f", &dol);

    printf("Cotacao atual do dolar: ");
    scanf("%f", &cot);

    real = dol*cot;

    printf("Quantidade de reais disponiveis: R$%.2f", real);
}