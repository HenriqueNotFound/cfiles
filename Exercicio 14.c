#include <stdio.h>
#include <stdlib.h>

int main(){

    float lit, dis, med;

    printf("Distancia percorrida (km): ");
    scanf("%f", &dis);

    printf("Combustivel gasto: (L): ");
    scanf("%f", &lit);

    med = dis/lit;

    printf("Consumo medio: %.1f km/L", med);

}   