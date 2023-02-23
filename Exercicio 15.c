#include <stdio.h>
#include <stdlib.h>

int main(){

    float cel, fah;

    printf("Insira o valor em Graus Celsius: ");
    scanf("%f", &cel);

    fah = ((9*cel)+160)/5;

    printf("Valor em Fahrenheit: %.1f", fah);

}