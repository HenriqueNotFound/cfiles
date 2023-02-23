#include <stdio.h>
#include <stdlib.h>

int main(){

    float val, rend;

    printf("Valor depositado: R$ ");
    scanf("%f", &val);

    rend = val+(val*0.7);

    printf("Valor com rendiment: R$ %.2f", rend);
}