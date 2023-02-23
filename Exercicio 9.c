#include <stdio.h>
#include <stdlib.h>

int main(){

    char mar[20], mod[20];
    int precoFa, precoFi;

    printf("Marca do carro: ");
    scanf("%s", &mar);

    printf("Modelo do carro: ");
    scanf("%s", &mod);    

    printf("Preco de fabrica: ");
    scanf("%d", &precoFa);

    precoFi = (precoFa*0.45)+(precoFa*0.28)+precoFa;

    printf("Marca: %s\n", mar);
    printf("Modelo: %s\n", mod);
    printf("Preco final: %d", precoFi);

}