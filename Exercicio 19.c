#include <stdio.h>
#include <stdlib.h>

int main(){

    float venda, custo, per;

    printf("Preco de custo: ");
    scanf("%f", &custo);

    printf("Percentual de acrescimo (0-100): ");
    scanf("%f", &per);

    per = (per/100);
    venda = custo+(custo*per);

    printf("Valor de venda: %.2f", venda);

}