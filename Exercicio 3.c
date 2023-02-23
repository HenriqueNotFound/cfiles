#include <stdio.h>
#include <stdlib.h>

int main(){

    int dis, t, vel, litros;

    printf("\nTempo gasto (horas): ");
    scanf("%d", &t);

    printf("\nVelocidade Media (Km/h): ");
    scanf("%d", &vel);

    dis = t*vel;
    litros = dis/10;

    printf("\nVelocidade Media: %d km/h", vel);
    printf("\nDistancia percorrida: %d km", dis);
    printf("\nLitros utilizados: %d L", litros);
    printf("\nTempo gasto: %d Horas", t);
}