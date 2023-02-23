#include <stdio.h>
#include <stdlib.h>

int main(){

    float val;

    printf("Valor da compra: ");
    scanf("%f", &val);

    printf("Valor das prestacoes:\n");
    printf("2x - R$ %.2f\n", val/2);
    printf("3x - R$ %.2f\n", val/3);
    printf("4x - R$ %.2f\n", val/4);
    printf("5x - R$ %.2f\n", val/5);

}