#include <stdio.h>
#include <stdlib.h>

int main(){

    int h,m;

    printf("Que horas sao?: ");
    scanf("%d", &h);

    m = h * 60;

    printf("Ja se passaram %d minutos", m);

}